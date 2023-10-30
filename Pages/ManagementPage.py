from concurrent.futures import thread
import xlwings as xw
from pyodbc import Row
from qfluentwidgets import (
    Flyout,
    FluentIcon,
    InfoBarIcon,
    LineEdit,
    StateToolTip,
    ToolTipFilter,
)
from PyQt5.QtWidgets import QWidget, QHeaderView, QTableWidgetItem
from PyQt5.QtGui import QCloseEvent
from PyQt5.QtCore import Qt, QThread
from threading import Thread
from Class.Student import Student
from Design.Ui_ManagementPage import Ui_ManagementPage
from Shared.database import (
    insertStudent,
    initDatabase,
    searchStudent,
    deleteStudent,
    updateStudent,
)


def toStudentTuple(data: list):
    """将列表转换为能转换成Student对象的元组"""
    return (data[0], data[1], data[2], data[3], int(data[4]), float(data[5]))


def isFloat(s: str) -> bool:
    """判断s是不是浮点数"""
    try:
        float(s)
    except:
        return False
    else:
        return True


class ManagementPage(QWidget, Ui_ManagementPage):
    """管理页，继承于设计器生成的界面，进行修改"""

    def __init__(self, parent=None) -> None:
        super().__init__(parent=parent)
        self.setupUi(self)
        # textbox编辑状态的储存
        # （准确来说，不叫textbox，叫LineEdit，但我写C#叫习惯了）
        self.tbxs = {
            self.idTbx: False,
            self.nameTbx: False,
            self.majorTbx: False,
            self.gradeTbx: False,
            self.ageTbx: False,
            self.gpaTbx: False,
        }
        self.maxRowCount = 16
        # 导出时的状态栏
        self.stateTooltip = None

    def getDataFromDataBase(self, data: list[Row] | None = None):
        """从数据库读取数据并进行分页"""
        if data == None:
            data = searchStudent(self.db, self.cur)
        return [
            data[i : i + self.maxRowCount]
            for i in range(0, len(data), self.maxRowCount)
        ]

    def initDatabase(self):
        """初始化数据库和表格数据"""
        # 初始化数据库和游标
        self.db = initDatabase()
        self.cur = self.db.cursor()
        # 初始化表格数据
        self.tableData = self.getDataFromDataBase()
        self.pageCount = len(self.tableData)

    def initBtns(self):
        """初始化页面的按钮"""
        # 设置按钮图标
        self.leftArrowBtn.setIcon(FluentIcon.PAGE_LEFT)
        self.rightArrowBtn.setIcon(FluentIcon.PAGE_RIGHT)
        self.queryBtn.setIcon(FluentIcon.SEARCH)
        self.deleteBtn.setIcon(FluentIcon.REMOVE)
        self.addBtn.setIcon(FluentIcon.ADD)
        self.gotoBtn.setIcon(FluentIcon.COMPLETED)
        self.clearSearchBtn.setIcon(FluentIcon.CLEAR_SELECTION)
        self.exportBtn.setIcon(FluentIcon.SAVE)
        # 禁用 buttons
        self.addBtn.setEnabled(False)
        self.deleteBtn.setEnabled(False)
        self.queryBtn.setEnabled(False)
        self.clearSearchBtn.setEnabled(False)
        # 链接button的Clicked事件
        self.queryBtn.clicked.connect(self.queryBtnClicked)
        self.addBtn.clicked.connect(self.addBtnClicked)
        self.leftArrowBtn.clicked.connect(self.leftArrowBtnClicked)
        self.rightArrowBtn.clicked.connect(self.rightArrowBtnClicked)
        self.gotoBtn.clicked.connect(self.gotoBtnClicked)
        self.deleteBtn.clicked.connect(self.deleteBtnClicked)
        self.clearSearchBtn.clicked.connect(self.clearSearchBtnClicked)
        self.exportBtn.clicked.connect(self.exportBtnClicked)

    def initTable(self):
        """初始化表格"""
        # 设置自适应表头
        self.TableWidget.horizontalHeader().setStretchLastSection(True)
        self.TableWidget.horizontalHeader().setSectionResizeMode(QHeaderView.Stretch)
        # 初始化显示页面
        self.pageIndexLabel.setText("1" if self.tableData != [] else "0")
        self.pageCountLabel.setText(str(self.pageCount))
        # 链接textbox的textchanged事件
        self.idTbx.textChanged.connect(self.idTbxTextChanged)
        self.nameTbx.textChanged.connect(self.nameTbxTextChanged)
        self.majorTbx.textChanged.connect(self.majorTbxTextChanged)
        self.gradeTbx.textChanged.connect(self.gradeTbxTextChanged)
        self.ageTbx.textChanged.connect(self.ageTbxTextChanged)
        self.gpaTbx.textChanged.connect(self.gpaTbxTextChanged)
        # 设置跳转页面的回车键响应事件
        self.goToPageTbx.returnPressed.connect(self.gotoBtnClicked)
        # 设置表格的点击事件
        self.TableWidget.clicked.connect(self.lineSelected)
        # 设置表格的修改内容事件
        self.TableWidget.cellChanged.connect(self.cellChanged)
        # 显示数据
        updateUiThead = Thread(target=self.initTableData)
        updateUiThead.start()
        updateUiThead.join()

    def initTableData(self):
        """初始化并显示表格数据"""
        # 使用数据库初始化显示表格
        if self.tableData == []:  # 异常处理
            self.TableWidget.setRowCount(0)
            return
        # 获得页面数并初始化页面数据
        self.pageIndex = int(self.pageIndexLabel.text())
        self.pageData = self.tableData[self.pageIndex - 1]

        # 设置表格行数
        self.rowCount = len(self.pageData)
        self.columnCount = 6
        self.TableWidget.setRowCount(self.rowCount)

        # 更新表格数据
        for line, rowIndex in zip(self.pageData, range(self.rowCount)):
            for cell, columnIndex in zip(line, range(self.columnCount)):
                item = QTableWidgetItem(str(cell))
                if columnIndex == 0:
                    item.setFlags(Qt.ItemIsEnabled)
                self.TableWidget.setItem(rowIndex, columnIndex, item)
            self.TableWidget.setRowHeight(rowIndex, 40)

    def isRightId(self, text: str) -> bool:
        """判断学号字段是否合理"""
        return text.isdigit() and len(text) == 6

    def idTbxTextChanged(self, text: str):
        """学号的文本改变事件"""
        self.baseTextChanged(text, self.idTbx, self.isRightId(text))

    def nameTbxTextChanged(self, text: str):
        """姓名的文本改变事件"""
        self.baseTextChanged(text, self.nameTbx, True)

    def majorTbxTextChanged(self, text: str):
        """专业的文本改变事件"""
        self.baseTextChanged(text, self.majorTbx, True)

    def gradeTbxTextChanged(self, text: str):
        """年级的文本改变事件"""
        self.baseTextChanged(text, self.gradeTbx, True)

    def isRightAge(self, text: str) -> bool:
        """判断年龄字段是否合理"""
        return text.isdigit() and 17 <= int(text) <= 26

    def ageTbxTextChanged(self, text: str):
        """年龄的文本改变事件"""
        self.baseTextChanged(text, self.ageTbx, self.isRightAge(text))

    def gpaTbxTextChanged(self, text: str):
        """成绩的文本改变事件"""

        self.baseTextChanged(text, self.gpaTbx, isFloat(text))

    def baseTextChanged(self, text: str, tbx: LineEdit, isRight: bool):
        """判断用户填写文本，如果填写成功并且满足条件，启用 addBtn"""
        # 设置文本已被编辑
        if text and isRight:
            self.tbxs[tbx] = True
        else:
            self.tbxs[tbx] = False
        # 记录满足条件的tbx个数
        editStaus = 0
        for isHaveText in self.tbxs.values():
            if isHaveText:
                editStaus += 1
        self.queryBtn.setEnabled(editStaus > 0)
        # 全部满足则启用插入按钮，满足一个即可启用查询按钮，否则禁用他们
        if editStaus == 6:
            self.addBtn.setEnabled(True)
        elif editStaus > 0:
            self.clearSearchBtn.setEnabled(True)
        else:
            self.addBtn.setEnabled(False)
            self.clearSearchBtn.setEnabled(False)

    def lineSelected(self, line=None):
        """储存选中的行的信息"""
        if line == None:
            return
        # 当有行被选中时，启用删除按钮，并记录行号
        self.deleteBtn.setEnabled(True)
        self.selectRow = self.TableWidget.currentRow()

    def isRightIdWithCheck(self, text: str):
        """判断学号字段是否合理，并判断是否重复"""
        for page in self.tableData:
            if not (page is Row):
                for line in page:
                    if text in line:
                        return False
        return True and self.isRightId(text)

    def checkIdOrAgeOrGpa(self, text: str, head: str) -> bool:
        """检查年龄或成绩是否满足条件"""

        def setTableDefalutDate(headerIndex: int):
            """恢复原来的数据"""
            if self.pageData is Row:
                self.TableWidget.setItem(
                    self.currentRow,
                    self.currentColumn,
                    QTableWidgetItem(str(self.pageData[headerIndex])),
                )
            else:
                self.TableWidget.setItem(
                    self.currentRow,
                    self.currentColumn,
                    QTableWidgetItem(str(self.pageData[self.currentRow][headerIndex])),
                )

        # 需要检查的类型的基本参数
        headerIndex, checkFunc = (0, isFloat)
        if head == "age":
            headerIndex, checkFunc = (4, self.isRightAge)
        elif head == "gpa":
            headerIndex, checkFunc = (5, isFloat)
        # 异步线程更新UI
        thread = Thread(target=setTableDefalutDate, args=(headerIndex,))
        if self.currentColumn == headerIndex and not checkFunc(text):
            thread.start()
            thread.join()
            return False
        return True

    def cellChanged(self):
        """单元格的修改事件"""
        # 修改的单元格的信息
        self.currentRow, self.currentColumn, item = (
            self.TableWidget.currentRow(),
            self.TableWidget.currentColumn(),
            self.TableWidget.currentItem(),
        )
        # 表头
        self.header = {
            1: "student_name",
            2: "major",
            3: "grade",
            4: "age",
            5: "gpa",
        }
        # 异常处理
        if item == None:
            return
        elif self.currentColumn == 4:
            isSuccess = self.checkIdOrAgeOrGpa(item.text(), self.header[4])
        elif self.currentColumn == 5:
            isSuccess = self.checkIdOrAgeOrGpa(item.text(), self.header[5])
        else:
            isSuccess = True
        if isSuccess:
            updateStudent(
                self.db,
                self.cur,
                "[{}]='{}' where [student_id]='{}'".format(
                    self.header[self.currentColumn],
                    item.text(),
                    str(
                        self.pageData[0]
                        if self.pageData is Row
                        else self.pageData[self.currentRow][0]
                    ),
                ),
            )
            thread = Thread(target=self.freshTable)
            thread.start()
            thread.join()

    def freshTable(self, isHasData: bool = False):
        """更新表格数据"""
        # 如果没有初始化好数据信息，初始化数据信息
        if not isHasData:
            self.tableData = self.getDataFromDataBase()
        # 获得页面总数和页码
        self.pageCount = len(self.tableData)
        nowIndex = int(self.pageIndexLabel.text())
        # 页码在不在合理的范围内时初始化为首页
        if nowIndex > self.pageCount or (nowIndex == 0 and self.pageCount > 0):
            self.pageIndexLabel.setText("1")
        # 更新显示当前页面
        self.pageCountLabel.setText(str(self.pageCount))
        self.initTableData()

    def addBtnClicked(self):
        """添加行事件"""
        data = []
        for tbx in self.tbxs.keys():
            data.append(tbx.text())
            tbx.setText("")
        # 如果能成功插入数据库
        if insertStudent(self.db, self.cur, Student.fromTuple(toStudentTuple(data))):
            # 更新表格
            updateUiThread = Thread(target=self.freshTable, args=(False,))
            updateUiThread.start()
            updateUiThread.join()
            # 添加成功窗口
            Flyout.create(
                icon=InfoBarIcon.SUCCESS,
                title="添加成功",
                content="数据已添加到数据库",
                target=self.addBtn,
                parent=self.window(),
            )
        else:
            # 添加失败窗口
            Flyout.create(
                icon=InfoBarIcon.ERROR,
                title="添加失败",
                content="学生已存在",
                target=self.addBtn,
                parent=self.window(),
            )

    def leftArrowBtnClicked(self):
        """上一页事件"""
        self.pageIndexLabel.setText(
            str(self.pageIndex - 1 if self.pageIndex - 1 > 0 else self.pageIndex)
        )
        self.initTableData()

    def rightArrowBtnClicked(self):
        """下一页事件"""
        self.pageIndexLabel.setText(
            str(
                self.pageIndex + 1
                if self.pageIndex + 1 <= self.pageCount
                else self.pageIndex
            )
        )
        self.initTableData()

    def gotoBtnClicked(self):
        """跳转页面事件"""
        where = self.goToPageTbx.text()
        if not where.isdigit() or int(where) > self.pageCount or int(where) < 1:
            Flyout.create(
                icon=InfoBarIcon.ERROR,
                title="跳转失败",
                content="页面不存在",
                target=self.gotoBtn,
                parent=self.window(),
            )
            return
        if where == self.pageIndexLabel.text():
            return
        # 设置页面并更新表格内容
        self.pageIndexLabel.setText(where)
        self.initTableData()

    def deleteBtnClicked(self):
        """删除一列数据事件"""
        deleteStudent(
            self.db,
            self.cur,
            str(list(self.pageData)[self.selectRow][0]),
        )
        # 异常处理 当只有一行的时候，禁用按钮并删除元素
        if self.TableWidget.rowCount() == 1:
            self.deleteBtn.setEnabled(False)
            # 但只有一页的时候，设置页码为0
            if self.pageCount == 1:
                self.pageCount = 0
                self.pageIndexLabel.setText("0")
        # 如果选中的行超出了总行数，禁用按钮
        if self.TableWidget.rowCount() - 1 <= self.selectRow:
            self.deleteBtn.setEnabled(False)
        Flyout.create(
            icon=InfoBarIcon.SUCCESS,
            title="删除成功",
            content="数据已从数据库中删除",
            target=self.deleteBtn,
            parent=self.window(),
        )
        updateUiThread = Thread(target=self.freshTable, args=(False,))
        updateUiThread.start()
        updateUiThread.join()

    def clearSearchBtnClicked(self):
        """清空输入的搜索文本事件"""
        for tbx in self.tbxs.keys():
            tbx.setText(None)
        # 显示数据库全部内容
        self.tableData = searchStudent(self.db, self.cur)
        updateUiThread = Thread(target=self.freshTable, args=(False,))
        updateUiThread.start()
        updateUiThread.join()

    def queryBtnClicked(self):
        """查询学生信息事件"""
        # where语句查询
        self.command = " where "
        self.isAdded = False
        # 表的字段
        self.format = ["student_id", "student_name", "major", "grade", "age", "gpa"]

        # 构造查询学生的SQL表达式
        def getCommand(id: str, text: str):
            """获得查询学生的SQL表达式"""
            # 异常处理
            if not text:
                return
            # 年龄处理，转为整数
            if id == "age":
                txt = "[{}] = {}".format(id, int(text)) if text else ""
            # 成绩处理，转为浮点数
            elif id == "gpa":
                txt = "[{}] = {}".format(id, float(text)) if text else ""
            # 其他处理，字符串
            else:
                txt = "[{}] = '{}'".format(id, text) if text else ""
            # 连接关系
            andText = " and " if self.isAdded else ""
            self.command = self.command + andText + txt
            self.isAdded = True

        # 循环构造命令行
        for id, text in zip(self.format, [tbx.text() for tbx in self.tbxs.keys()]):
            getCommand(id, text)
        # 储存搜索结果，并显示
        self.tableData = self.getDataFromDataBase(
            searchStudent(self.db, self.cur, self.command)
        )
        updateUiThread = Thread(target=self.freshTable, args=(True,))
        updateUiThread.start()
        updateUiThread.join()

    def exportBtnClicked(self):
        """导出按钮点击事件"""
        def changeExportStatusEnable() -> None:
                """改变状态栏状态"""
                if self.stateTooltip:
                    self.stateTooltip.setContent("文件导出成功" + " 😆")
                    self.stateTooltip.setState(True)
                    self.stateTooltip = None
                else:
                    self.stateTooltip = StateToolTip("导出中", "请稍后", self.window())
                    self.stateTooltip.move(self.stateTooltip.getSuitablePos())
                    self.stateTooltip.show()
        def exportToExcel():
            """导出页面为xlsx文件"""
            # 创建 excel 文件
            excelApp = xw.App(False, False)
            excelFile = excelApp.books.add()
            excelFile.sheets.add("sheet")
            # 设置表头
            sheet = excelFile.sheets[0]
            headers = {"A": "学号", "B": "姓名", "C": "专业", "D": "班级", "E": "年龄", "F": "成绩"}
            for i, header in headers.items():
                sheet[i + "1"].value = header
            hight = 2
            for page in self.tableData:
                for line in page:
                    for header, cell in zip(headers.keys(), line):
                        sheet["{}{}".format(header, hight)].value = str(cell)
                    hight += 1
            # 保存信息
            excelFile.save("学生信息表.xlsx")
            excelFile.close()
            excelApp.quit()
        # 显示状态栏
        changeExportStatusEnable()
        # 异步线程导出文件
        thread = Thread(target=exportToExcel)
        thread.start()
        thread.join()
        # 关闭状态栏
        changeExportStatusEnable()

    def closeEvent(self, a0: QCloseEvent) -> None:
        """程序结束"""
        self.db.commit()
        self.db.close()
        return super().closeEvent(a0)
