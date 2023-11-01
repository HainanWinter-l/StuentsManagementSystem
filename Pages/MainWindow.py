from qfluentwidgets import (
    FluentIcon,
    MSFluentWindow,
    NavigationBarPushButton,
    NavigationItemPosition,
    SplashScreen,
    isDarkTheme,
    CustomStyleSheet,
)
from PyQt6.QtGui import QIcon, QImage
from PyQt6.QtWidgets import QApplication
from Pages.HomePage import HomePage
from Pages.ManagementPage import ManagementPage
from Pages.InfoPage import InfoPage
from Pages.SettingPage import SettingPage
from time import sleep, time
from pyodbc import Row
from webbrowser import open_new_tab
from Shared.config import resourcePath


class MyMainWindow(MSFluentWindow):
    def __init__(self):
        super().__init__()
        # 记录程序打开时间
        startTime = time()
        # 初始化窗口
        self.initWindow()
        # 添加页面到路由
        self.addNavigationPage()
        # 设置页面样式，修复控件切换主题时Label无法切换颜色的BUG
        lightQss, darkQss = "color: black;", "color: white;"
        self.themeQss = CustomStyleSheet(self)
        self.themeQss.setCustomStyleSheet(lightQss, darkQss)
        # 应用到出现BUG的页面
        self.themeQss.apply(self.homePage)
        self.themeQss.apply(self.managementPage)
        self.themeQss.apply(self.infoPage)
        # 初始化菜单
        self.initNavigationMenu()
        # 初始化连接数据库的页面
        self.initManagementPageData()
        self.initHomePageData()
        # 求出初始化加载时间，并关闭开屏动画
        spendTime = time() - startTime
        sleep(1 - spendTime if spendTime <= 1 else 0)
        self.splashScreen.finish()
        self.splashScreen.deleteLater()

    def addNavigationPage(self):
        """添加页面到路由"""
        self.homePage = HomePage(self)
        self.managementPage = ManagementPage(self)
        self.infoPage = InfoPage(self)
        self.settingPage = SettingPage(self)

    def initManagementPageData(self):
        """初始化管理页的数据"""
        self.managementPage.initDatabase()
        self.managementPage.initBtns()
        self.managementPage.initTable()
        # 连接更新homePage的数据
        self.managementPage.TableWidget.itemChanged.connect(self.initHomePageData)

    def getHomePageData(self) -> tuple[int, int, int]:
        """处理计算首页需要的数据"""
        studentCount, gpaCount, gradeCount, gradeNames = (
            0,
            0,
            0,
            {},
        )
        indexOfGrade, indexOfFGpa, grearLine = 3, 5, 2.6
        for i in self.managementPage.tableData:
            if i is Row:
                studentCount += 1
                gpaCount += 1 if i[indexOfFGpa] < grearLine else 0
                gradeCount += 1 if gradeNames.get(str(i[indexOfGrade])) == None else 0
                gradeNames[str(i[indexOfGrade])] = True
                continue
            for j in i:
                studentCount += 1
                gpaCount += 1 if j[indexOfFGpa] < grearLine else 0
                gradeCount += 1 if gradeNames.get(str(j[indexOfGrade])) == None else 0
                gradeNames[str(j[indexOfGrade])] = True
        return studentCount, gpaCount, gradeCount

    def initHomePageData(self):
        """刷新首页的数据"""
        studentCount, gpaCount, gradeCount = self.getHomePageData()
        self.homePage.studentCountLabel.setText("{} 人".format(studentCount))
        self.homePage.studentGpaLabel.setText(
            "{:.2f}%".format(100 * (gpaCount / studentCount))
        )
        self.homePage.gradeCountLabel.setText("{} 个".format(gradeCount))
        self.homePage.avgStudentCountLabel.setText(
            "{:.2f} 人".format(studentCount / gradeCount)
        )

    def openGithub(self):
        open_new_tab(r"https://github.com/HainanWinter-l/StuentsManagementSystem")

    def initNavigationMenu(self):
        """将窗口中的页面添加到导航栏中，并设置链接"""
        self.addSubInterface(self.homePage, FluentIcon.HOME, "首页")
        self.addSubInterface(self.managementPage, FluentIcon.PEOPLE, "管理")
        self.addSubInterface(self.infoPage, FluentIcon.INFO, "关于")

        self.navigationInterface.addWidget(
            routeKey="avatar",
            widget=NavigationBarPushButton(FluentIcon.GITHUB, "Github", False),
            onClick=self.openGithub,
            position=NavigationItemPosition.BOTTOM,
        )
        self.addSubInterface(
            self.settingPage,
            FluentIcon.SETTING,
            "设置",
            position=NavigationItemPosition.BOTTOM,
        )

    def initWindow(self):
        """初始化主窗口基本信息"""
        self.setWindowTitle("学生管理系统")  # 标题
        self.setWindowIcon(QIcon(resourcePath("Resource/image/logo.png")))  # 图标
        self.setMinimumWidth(960)  # 最小宽度
        self.setMinimumHeight(740)  # 最小高度
        self.resize(980, 760)  # 窗口尺寸
        self.setMicaEffectEnabled(True)  # 云母特效

        # 启动界面
        if isDarkTheme():
            self.splashScreen = SplashScreen(
                resourcePath("Resource/image/ncst-light.png"), self
            )
        else:
            self.splashScreen = SplashScreen(
                resourcePath("Resource/image/ncst-dark.png"), self
            )
        self.splashScreen.resize(self.size())
        self.splashScreen.setIconSize(self.size())
        self.splashScreen.raise_()
        # 设置窗口居中显示
        desktop = QApplication.primaryScreen().size()
        size = self.geometry()
        width, height = desktop.width(), desktop.height()
        self.move(
            (desktop.width() - size.width()) >> 1,
            (desktop.height() - size.height()) >> 1,
        )
        self.show()
        QApplication.processEvents()

    def closeEvent(self, e):
        # 释放资源
        return super().closeEvent(e)
