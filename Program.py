from sys import argv, setrecursionlimit
from PyQt6.QtWidgets import QApplication
from Pages.MainWindow import MyMainWindow


if __name__ == "__main__":
    setrecursionlimit(int(1e9))  # 程序最高递归深度设置

    app = QApplication(argv)
    myWin = MyMainWindow()

    myWin.show()
    app.exec()
