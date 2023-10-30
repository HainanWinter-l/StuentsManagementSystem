from sys import argv, setrecursionlimit
from PyQt5.QtCore import Qt
from PyQt5.QtWidgets import QApplication
from Pages.MainWindow import MyMainWindow

if __name__ == "__main__":
    # 程序最高递归深度设置
    setrecursionlimit(int(1e9))
    # 启用高DPI设置
    QApplication.setHighDpiScaleFactorRoundingPolicy(
        Qt.HighDpiScaleFactorRoundingPolicy.PassThrough
    )
    QApplication.setAttribute(Qt.ApplicationAttribute.AA_EnableHighDpiScaling)
    QApplication.setAttribute(Qt.ApplicationAttribute.AA_UseHighDpiPixmaps)

    app = QApplication(argv)
    myWin = MyMainWindow()

    myWin.show()
    app.exec_()
