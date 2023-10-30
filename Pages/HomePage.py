from PyQt5.QtWidgets import QWidget
from PyQt5.QtCore import QTimer, QTime
from Design.Ui_HomePage import Ui_HomePage

class HomePage(QWidget, Ui_HomePage):
    """首页，基于设计器生成，添加时间计时功能"""

    def __init__(self, parent=None):
        super().__init__(parent=parent)
        timer = QTimer(self)
        timer.timeout.connect(self.showTime)
        timer.start(1000)
        self.setupUi(self)
        self.lcdNumber.display(QTime.currentTime().toString("hh:mm:ss"))

    def showTime(self):
        """更新首页的时间"""
        self.lcdNumber.display(QTime.currentTime().toString("hh:mm:ss"))
