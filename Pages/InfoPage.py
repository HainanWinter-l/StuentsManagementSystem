from PyQt5.QtWidgets import QWidget
from Design.Ui_InfoPage import Ui_InfoPage
from webbrowser import open_new_tab

class InfoPage(QWidget, Ui_InfoPage):
    """关于页，基于设计器生成的页面"""

    def __init__(self, parent=None):
        super().__init__(parent=parent)
        self.setupUi(self)
        # 连接双击表格事件
        self.TableWidget.doubleClicked.connect(self.openUrl)
    def openUrl(self):
        """使用浏览器打开连接"""
        row, column = self.TableWidget.currentRow(), 1
        url = self.TableWidget.item(row, column)
        if url == None:
            Exception("连接不存在")
            return
        open_new_tab(url.text())