# Form implementation generated from reading ui file 'd:\homework\Design\ManagementPage.ui'
#
# Created by: PyQt6 UI code generator 6.4.2
#
# WARNING: Any manual changes made to this file will be lost when pyuic6 is
# run again.  Do not edit this file unless you know what you are doing.


from PyQt6 import QtCore, QtGui, QtWidgets


class Ui_ManagementPage(object):
    def setupUi(self, ManagementPage):
        ManagementPage.setObjectName("ManagementPage")
        ManagementPage.resize(912, 587)
        self.gridLayout_3 = QtWidgets.QGridLayout(ManagementPage)
        self.gridLayout_3.setObjectName("gridLayout_3")
        spacerItem = QtWidgets.QSpacerItem(891, 20, QtWidgets.QSizePolicy.Policy.Expanding, QtWidgets.QSizePolicy.Policy.Minimum)
        self.gridLayout_3.addItem(spacerItem, 0, 0, 1, 2)
        self.LargeTitleLabel = LargeTitleLabel(parent=ManagementPage)
        font = QtGui.QFont()
        font.setFamily("Agency FB")
        font.setPointSize(22)
        font.setBold(False)
        font.setWeight(50)
        self.LargeTitleLabel.setFont(font)
        self.LargeTitleLabel.setAlignment(QtCore.Qt.AlignmentFlag.AlignCenter)
        self.LargeTitleLabel.setObjectName("LargeTitleLabel")
        self.gridLayout_3.addWidget(self.LargeTitleLabel, 1, 0, 1, 1)
        spacerItem1 = QtWidgets.QSpacerItem(827, 20, QtWidgets.QSizePolicy.Policy.Expanding, QtWidgets.QSizePolicy.Policy.Minimum)
        self.gridLayout_3.addItem(spacerItem1, 1, 1, 1, 1)
        self.HorizontalSeparator = HorizontalSeparator(parent=ManagementPage)
        self.HorizontalSeparator.setObjectName("HorizontalSeparator")
        self.gridLayout_3.addWidget(self.HorizontalSeparator, 2, 0, 1, 2)
        self.SimpleCardWidget = SimpleCardWidget(parent=ManagementPage)
        self.SimpleCardWidget.setObjectName("SimpleCardWidget")
        self.gridLayout_2 = QtWidgets.QGridLayout(self.SimpleCardWidget)
        self.gridLayout_2.setObjectName("gridLayout_2")
        self.CardWidget = CardWidget(parent=self.SimpleCardWidget)
        self.CardWidget.setObjectName("CardWidget")
        self.gridLayout = QtWidgets.QGridLayout(self.CardWidget)
        self.gridLayout.setObjectName("gridLayout")
        self.horizontalLayout_4 = QtWidgets.QHBoxLayout()
        self.horizontalLayout_4.setObjectName("horizontalLayout_4")
        self.idTbx = LineEdit(parent=self.CardWidget)
        self.idTbx.setText("")
        self.idTbx.setAlignment(QtCore.Qt.AlignmentFlag.AlignCenter)
        self.idTbx.setObjectName("idTbx")
        self.horizontalLayout_4.addWidget(self.idTbx)
        self.nameTbx = LineEdit(parent=self.CardWidget)
        self.nameTbx.setAlignment(QtCore.Qt.AlignmentFlag.AlignCenter)
        self.nameTbx.setObjectName("nameTbx")
        self.horizontalLayout_4.addWidget(self.nameTbx)
        self.majorTbx = LineEdit(parent=self.CardWidget)
        self.majorTbx.setAlignment(QtCore.Qt.AlignmentFlag.AlignCenter)
        self.majorTbx.setObjectName("majorTbx")
        self.horizontalLayout_4.addWidget(self.majorTbx)
        self.gradeTbx = LineEdit(parent=self.CardWidget)
        self.gradeTbx.setAlignment(QtCore.Qt.AlignmentFlag.AlignCenter)
        self.gradeTbx.setObjectName("gradeTbx")
        self.horizontalLayout_4.addWidget(self.gradeTbx)
        self.ageTbx = LineEdit(parent=self.CardWidget)
        self.ageTbx.setAlignment(QtCore.Qt.AlignmentFlag.AlignCenter)
        self.ageTbx.setObjectName("ageTbx")
        self.horizontalLayout_4.addWidget(self.ageTbx)
        self.gpaTbx = LineEdit(parent=self.CardWidget)
        self.gpaTbx.setAlignment(QtCore.Qt.AlignmentFlag.AlignCenter)
        self.gpaTbx.setObjectName("gpaTbx")
        self.horizontalLayout_4.addWidget(self.gpaTbx)
        self.gridLayout.addLayout(self.horizontalLayout_4, 0, 0, 1, 1)
        self.clearSearchBtn = PrimaryToolButton(parent=self.CardWidget)
        self.clearSearchBtn.setObjectName("clearSearchBtn")
        self.gridLayout.addWidget(self.clearSearchBtn, 0, 1, 1, 1)
        self.gridLayout_2.addWidget(self.CardWidget, 1, 0, 1, 1)
        self.TableWidget = TableWidget(parent=self.SimpleCardWidget)
        self.TableWidget.setRowCount(0)
        self.TableWidget.setObjectName("TableWidget")
        self.TableWidget.setColumnCount(6)
        item = QtWidgets.QTableWidgetItem()
        self.TableWidget.setHorizontalHeaderItem(0, item)
        item = QtWidgets.QTableWidgetItem()
        self.TableWidget.setHorizontalHeaderItem(1, item)
        item = QtWidgets.QTableWidgetItem()
        self.TableWidget.setHorizontalHeaderItem(2, item)
        item = QtWidgets.QTableWidgetItem()
        self.TableWidget.setHorizontalHeaderItem(3, item)
        item = QtWidgets.QTableWidgetItem()
        self.TableWidget.setHorizontalHeaderItem(4, item)
        item = QtWidgets.QTableWidgetItem()
        self.TableWidget.setHorizontalHeaderItem(5, item)
        self.TableWidget.horizontalHeader().setDefaultSectionSize(140)
        self.TableWidget.verticalHeader().setVisible(False)
        self.TableWidget.verticalHeader().setCascadingSectionResizes(False)
        self.TableWidget.verticalHeader().setDefaultSectionSize(100)
        self.TableWidget.verticalHeader().setHighlightSections(False)
        self.TableWidget.verticalHeader().setMinimumSectionSize(45)
        self.gridLayout_2.addWidget(self.TableWidget, 2, 0, 1, 1)
        self.horizontalLayout_2 = QtWidgets.QHBoxLayout()
        self.horizontalLayout_2.setObjectName("horizontalLayout_2")
        self.queryBtn = PrimaryPushButton(parent=self.SimpleCardWidget)
        self.queryBtn.setProperty("hasIcon", True)
        self.queryBtn.setObjectName("queryBtn")
        self.horizontalLayout_2.addWidget(self.queryBtn)
        self.addBtn = PrimaryPushButton(parent=self.SimpleCardWidget)
        self.addBtn.setProperty("hasIcon", True)
        self.addBtn.setObjectName("addBtn")
        self.horizontalLayout_2.addWidget(self.addBtn)
        self.deleteBtn = PrimaryPushButton(parent=self.SimpleCardWidget)
        self.deleteBtn.setProperty("hasIcon", True)
        self.deleteBtn.setObjectName("deleteBtn")
        self.horizontalLayout_2.addWidget(self.deleteBtn)
        self.exportBtn = PrimaryPushButton(parent=self.SimpleCardWidget)
        self.exportBtn.setProperty("hasIcon", True)
        self.exportBtn.setObjectName("exportBtn")
        self.horizontalLayout_2.addWidget(self.exportBtn)
        spacerItem2 = QtWidgets.QSpacerItem(40, 20, QtWidgets.QSizePolicy.Policy.Expanding, QtWidgets.QSizePolicy.Policy.Minimum)
        self.horizontalLayout_2.addItem(spacerItem2)
        self.leftArrowBtn = TransparentToolButton(parent=self.SimpleCardWidget)
        self.leftArrowBtn.setObjectName("leftArrowBtn")
        self.horizontalLayout_2.addWidget(self.leftArrowBtn)
        self.pageIndexLabel = BodyLabel(parent=self.SimpleCardWidget)
        self.pageIndexLabel.setAlignment(QtCore.Qt.AlignmentFlag.AlignCenter)
        self.pageIndexLabel.setObjectName("pageIndexLabel")
        self.horizontalLayout_2.addWidget(self.pageIndexLabel)
        self.rightArrowBtn = TransparentToolButton(parent=self.SimpleCardWidget)
        self.rightArrowBtn.setObjectName("rightArrowBtn")
        self.horizontalLayout_2.addWidget(self.rightArrowBtn)
        self.pageCountLabel_2 = BodyLabel(parent=self.SimpleCardWidget)
        self.pageCountLabel_2.setObjectName("pageCountLabel_2")
        self.horizontalLayout_2.addWidget(self.pageCountLabel_2)
        self.pageCountLabel = BodyLabel(parent=self.SimpleCardWidget)
        self.pageCountLabel.setObjectName("pageCountLabel")
        self.horizontalLayout_2.addWidget(self.pageCountLabel)
        self.pageCountLabel_3 = BodyLabel(parent=self.SimpleCardWidget)
        self.pageCountLabel_3.setObjectName("pageCountLabel_3")
        self.horizontalLayout_2.addWidget(self.pageCountLabel_3)
        spacerItem3 = QtWidgets.QSpacerItem(40, 20, QtWidgets.QSizePolicy.Policy.Expanding, QtWidgets.QSizePolicy.Policy.Minimum)
        self.horizontalLayout_2.addItem(spacerItem3)
        self.BodyLabel_3 = BodyLabel(parent=self.SimpleCardWidget)
        self.BodyLabel_3.setAlignment(QtCore.Qt.AlignmentFlag.AlignCenter)
        self.BodyLabel_3.setObjectName("BodyLabel_3")
        self.horizontalLayout_2.addWidget(self.BodyLabel_3)
        self.goToPageTbx = LineEdit(parent=self.SimpleCardWidget)
        self.goToPageTbx.setObjectName("goToPageTbx")
        self.horizontalLayout_2.addWidget(self.goToPageTbx)
        self.BodyLabel_4 = BodyLabel(parent=self.SimpleCardWidget)
        self.BodyLabel_4.setAlignment(QtCore.Qt.AlignmentFlag.AlignCenter)
        self.BodyLabel_4.setObjectName("BodyLabel_4")
        self.horizontalLayout_2.addWidget(self.BodyLabel_4)
        self.gotoBtn = TransparentToolButton(parent=self.SimpleCardWidget)
        self.gotoBtn.setObjectName("gotoBtn")
        self.horizontalLayout_2.addWidget(self.gotoBtn)
        self.gridLayout_2.addLayout(self.horizontalLayout_2, 0, 0, 1, 1)
        self.gridLayout_3.addWidget(self.SimpleCardWidget, 3, 0, 1, 2)

        self.retranslateUi(ManagementPage)
        QtCore.QMetaObject.connectSlotsByName(ManagementPage)

    def retranslateUi(self, ManagementPage):
        _translate = QtCore.QCoreApplication.translate
        ManagementPage.setWindowTitle(_translate("ManagementPage", "Form"))
        self.LargeTitleLabel.setText(_translate("ManagementPage", "管理"))
        self.idTbx.setPlaceholderText(_translate("ManagementPage", "学号"))
        self.nameTbx.setPlaceholderText(_translate("ManagementPage", "姓名"))
        self.majorTbx.setPlaceholderText(_translate("ManagementPage", "专业"))
        self.gradeTbx.setPlaceholderText(_translate("ManagementPage", "班级"))
        self.ageTbx.setPlaceholderText(_translate("ManagementPage", "年龄"))
        self.gpaTbx.setPlaceholderText(_translate("ManagementPage", "成绩"))
        item = self.TableWidget.horizontalHeaderItem(0)
        item.setText(_translate("ManagementPage", "学号"))
        item = self.TableWidget.horizontalHeaderItem(1)
        item.setText(_translate("ManagementPage", "姓名"))
        item = self.TableWidget.horizontalHeaderItem(2)
        item.setText(_translate("ManagementPage", "专业"))
        item = self.TableWidget.horizontalHeaderItem(3)
        item.setText(_translate("ManagementPage", "班级"))
        item = self.TableWidget.horizontalHeaderItem(4)
        item.setText(_translate("ManagementPage", "年龄"))
        item = self.TableWidget.horizontalHeaderItem(5)
        item.setText(_translate("ManagementPage", "成绩"))
        self.queryBtn.setText(_translate("ManagementPage", "查找"))
        self.addBtn.setText(_translate("ManagementPage", "添加"))
        self.deleteBtn.setText(_translate("ManagementPage", "删除"))
        self.exportBtn.setText(_translate("ManagementPage", "导出"))
        self.pageIndexLabel.setText(_translate("ManagementPage", "1"))
        self.pageCountLabel_2.setText(_translate("ManagementPage", "共"))
        self.pageCountLabel.setText(_translate("ManagementPage", " %d "))
        self.pageCountLabel_3.setText(_translate("ManagementPage", "页"))
        self.BodyLabel_3.setText(_translate("ManagementPage", "跳转"))
        self.goToPageTbx.setPlaceholderText(_translate("ManagementPage", "页码"))
        self.BodyLabel_4.setText(_translate("ManagementPage", "页"))
from qfluentwidgets import BodyLabel, CardWidget, HorizontalSeparator, LargeTitleLabel, LineEdit, PrimaryPushButton, PrimaryToolButton, SimpleCardWidget, TableWidget, TransparentToolButton
