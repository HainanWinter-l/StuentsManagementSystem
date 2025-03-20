# Form implementation generated from reading ui file 'd:\homework\Design\InfoPage.ui'
#
# Created by: PyQt6 UI code generator 6.4.2
#
# WARNING: Any manual changes made to this file will be lost when pyuic6 is
# run again.  Do not edit this file unless you know what you are doing.


from PyQt6 import QtCore, QtGui, QtWidgets


class Ui_InfoPage(object):
    def setupUi(self, InfoPage):
        InfoPage.setObjectName("InfoPage")
        InfoPage.resize(619, 587)
        self.gridLayout_2 = QtWidgets.QGridLayout(InfoPage)
        self.gridLayout_2.setObjectName("gridLayout_2")
        self.verticalLayout = QtWidgets.QVBoxLayout()
        self.verticalLayout.setObjectName("verticalLayout")
        spacerItem = QtWidgets.QSpacerItem(40, 20, QtWidgets.QSizePolicy.Policy.Expanding, QtWidgets.QSizePolicy.Policy.Minimum)
        self.verticalLayout.addItem(spacerItem)
        self.horizontalLayout = QtWidgets.QHBoxLayout()
        self.horizontalLayout.setObjectName("horizontalLayout")
        spacerItem1 = QtWidgets.QSpacerItem(20, 20, QtWidgets.QSizePolicy.Policy.Minimum, QtWidgets.QSizePolicy.Policy.Minimum)
        self.horizontalLayout.addItem(spacerItem1)
        self.LargeTitleLabel = LargeTitleLabel(parent=InfoPage)
        font = QtGui.QFont()
        font.setFamily("SimSun-ExtB")
        font.setPointSize(22)
        font.setBold(True)
        font.setWeight(75)
        self.LargeTitleLabel.setFont(font)
        self.LargeTitleLabel.setAlignment(QtCore.Qt.AlignmentFlag.AlignCenter)
        self.LargeTitleLabel.setObjectName("LargeTitleLabel")
        self.horizontalLayout.addWidget(self.LargeTitleLabel)
        spacerItem2 = QtWidgets.QSpacerItem(40, 20, QtWidgets.QSizePolicy.Policy.Expanding, QtWidgets.QSizePolicy.Policy.Minimum)
        self.horizontalLayout.addItem(spacerItem2)
        self.verticalLayout.addLayout(self.horizontalLayout)
        self.HorizontalSeparator = HorizontalSeparator(parent=InfoPage)
        self.HorizontalSeparator.setObjectName("HorizontalSeparator")
        self.verticalLayout.addWidget(self.HorizontalSeparator)
        self.gridLayout_2.addLayout(self.verticalLayout, 0, 0, 1, 1)
        self.ElevatedCardWidget = ElevatedCardWidget(parent=InfoPage)
        self.ElevatedCardWidget.setObjectName("ElevatedCardWidget")
        self.gridLayout = QtWidgets.QGridLayout(self.ElevatedCardWidget)
        self.gridLayout.setObjectName("gridLayout")
        self.TableWidget = TableWidget(parent=self.ElevatedCardWidget)
        self.TableWidget.setTabletTracking(False)
        self.TableWidget.setFrameShadow(QtWidgets.QFrame.Shadow.Sunken)
        self.TableWidget.setWordWrap(True)
        self.TableWidget.setCornerButtonEnabled(True)
        self.TableWidget.setSelectRightClickedRow(False)
        self.TableWidget.setObjectName("TableWidget")
        self.TableWidget.setColumnCount(2)
        self.TableWidget.setRowCount(7)
        item = QtWidgets.QTableWidgetItem()
        item.setTextAlignment(QtCore.Qt.AlignmentFlag.AlignCenter)
        self.TableWidget.setVerticalHeaderItem(0, item)
        item = QtWidgets.QTableWidgetItem()
        item.setTextAlignment(QtCore.Qt.AlignmentFlag.AlignCenter)
        self.TableWidget.setVerticalHeaderItem(1, item)
        item = QtWidgets.QTableWidgetItem()
        item.setTextAlignment(QtCore.Qt.AlignmentFlag.AlignCenter)
        self.TableWidget.setVerticalHeaderItem(2, item)
        item = QtWidgets.QTableWidgetItem()
        item.setTextAlignment(QtCore.Qt.AlignmentFlag.AlignCenter)
        self.TableWidget.setVerticalHeaderItem(3, item)
        item = QtWidgets.QTableWidgetItem()
        item.setTextAlignment(QtCore.Qt.AlignmentFlag.AlignCenter)
        self.TableWidget.setVerticalHeaderItem(4, item)
        item = QtWidgets.QTableWidgetItem()
        item.setTextAlignment(QtCore.Qt.AlignmentFlag.AlignCenter)
        self.TableWidget.setVerticalHeaderItem(5, item)
        item = QtWidgets.QTableWidgetItem()
        item.setTextAlignment(QtCore.Qt.AlignmentFlag.AlignCenter)
        self.TableWidget.setVerticalHeaderItem(6, item)
        item = QtWidgets.QTableWidgetItem()
        self.TableWidget.setHorizontalHeaderItem(0, item)
        item = QtWidgets.QTableWidgetItem()
        self.TableWidget.setHorizontalHeaderItem(1, item)
        item = QtWidgets.QTableWidgetItem()
        item.setTextAlignment(QtCore.Qt.AlignmentFlag.AlignCenter)
        item.setFlags(QtCore.Qt.ItemFlag.ItemIsSelectable|QtCore.Qt.ItemFlag.ItemIsDragEnabled|QtCore.Qt.ItemFlag.ItemIsDropEnabled|QtCore.Qt.ItemFlag.ItemIsUserCheckable|QtCore.Qt.ItemFlag.ItemIsEnabled)
        self.TableWidget.setItem(0, 0, item)
        item = QtWidgets.QTableWidgetItem()
        item.setTextAlignment(QtCore.Qt.AlignmentFlag.AlignCenter)
        item.setFlags(QtCore.Qt.ItemFlag.ItemIsSelectable|QtCore.Qt.ItemFlag.ItemIsDragEnabled|QtCore.Qt.ItemFlag.ItemIsDropEnabled|QtCore.Qt.ItemFlag.ItemIsUserCheckable|QtCore.Qt.ItemFlag.ItemIsEnabled)
        self.TableWidget.setItem(0, 1, item)
        item = QtWidgets.QTableWidgetItem()
        item.setTextAlignment(QtCore.Qt.AlignmentFlag.AlignCenter)
        item.setFlags(QtCore.Qt.ItemFlag.ItemIsSelectable|QtCore.Qt.ItemFlag.ItemIsDragEnabled|QtCore.Qt.ItemFlag.ItemIsDropEnabled|QtCore.Qt.ItemFlag.ItemIsUserCheckable|QtCore.Qt.ItemFlag.ItemIsEnabled)
        self.TableWidget.setItem(1, 0, item)
        item = QtWidgets.QTableWidgetItem()
        item.setTextAlignment(QtCore.Qt.AlignmentFlag.AlignCenter)
        item.setFlags(QtCore.Qt.ItemFlag.ItemIsSelectable|QtCore.Qt.ItemFlag.ItemIsDragEnabled|QtCore.Qt.ItemFlag.ItemIsDropEnabled|QtCore.Qt.ItemFlag.ItemIsUserCheckable|QtCore.Qt.ItemFlag.ItemIsEnabled)
        self.TableWidget.setItem(1, 1, item)
        item = QtWidgets.QTableWidgetItem()
        item.setTextAlignment(QtCore.Qt.AlignmentFlag.AlignCenter)
        item.setFlags(QtCore.Qt.ItemFlag.ItemIsSelectable|QtCore.Qt.ItemFlag.ItemIsDragEnabled|QtCore.Qt.ItemFlag.ItemIsDropEnabled|QtCore.Qt.ItemFlag.ItemIsUserCheckable|QtCore.Qt.ItemFlag.ItemIsEnabled)
        self.TableWidget.setItem(2, 0, item)
        item = QtWidgets.QTableWidgetItem()
        item.setTextAlignment(QtCore.Qt.AlignmentFlag.AlignCenter)
        item.setFlags(QtCore.Qt.ItemFlag.ItemIsSelectable|QtCore.Qt.ItemFlag.ItemIsDragEnabled|QtCore.Qt.ItemFlag.ItemIsDropEnabled|QtCore.Qt.ItemFlag.ItemIsUserCheckable|QtCore.Qt.ItemFlag.ItemIsEnabled)
        self.TableWidget.setItem(2, 1, item)
        item = QtWidgets.QTableWidgetItem()
        item.setTextAlignment(QtCore.Qt.AlignmentFlag.AlignCenter)
        item.setFlags(QtCore.Qt.ItemFlag.ItemIsSelectable|QtCore.Qt.ItemFlag.ItemIsDragEnabled|QtCore.Qt.ItemFlag.ItemIsDropEnabled|QtCore.Qt.ItemFlag.ItemIsUserCheckable|QtCore.Qt.ItemFlag.ItemIsEnabled)
        self.TableWidget.setItem(3, 0, item)
        item = QtWidgets.QTableWidgetItem()
        item.setTextAlignment(QtCore.Qt.AlignmentFlag.AlignCenter)
        item.setFlags(QtCore.Qt.ItemFlag.ItemIsSelectable|QtCore.Qt.ItemFlag.ItemIsDragEnabled|QtCore.Qt.ItemFlag.ItemIsDropEnabled|QtCore.Qt.ItemFlag.ItemIsUserCheckable|QtCore.Qt.ItemFlag.ItemIsEnabled)
        self.TableWidget.setItem(3, 1, item)
        item = QtWidgets.QTableWidgetItem()
        item.setTextAlignment(QtCore.Qt.AlignmentFlag.AlignCenter)
        item.setFlags(QtCore.Qt.ItemFlag.ItemIsSelectable|QtCore.Qt.ItemFlag.ItemIsDragEnabled|QtCore.Qt.ItemFlag.ItemIsDropEnabled|QtCore.Qt.ItemFlag.ItemIsUserCheckable|QtCore.Qt.ItemFlag.ItemIsEnabled)
        self.TableWidget.setItem(4, 0, item)
        item = QtWidgets.QTableWidgetItem()
        item.setTextAlignment(QtCore.Qt.AlignmentFlag.AlignCenter)
        item.setFlags(QtCore.Qt.ItemFlag.ItemIsSelectable|QtCore.Qt.ItemFlag.ItemIsDragEnabled|QtCore.Qt.ItemFlag.ItemIsDropEnabled|QtCore.Qt.ItemFlag.ItemIsUserCheckable|QtCore.Qt.ItemFlag.ItemIsEnabled)
        self.TableWidget.setItem(4, 1, item)
        item = QtWidgets.QTableWidgetItem()
        item.setTextAlignment(QtCore.Qt.AlignmentFlag.AlignCenter)
        item.setFlags(QtCore.Qt.ItemFlag.ItemIsSelectable|QtCore.Qt.ItemFlag.ItemIsDragEnabled|QtCore.Qt.ItemFlag.ItemIsDropEnabled|QtCore.Qt.ItemFlag.ItemIsUserCheckable|QtCore.Qt.ItemFlag.ItemIsEnabled)
        self.TableWidget.setItem(5, 0, item)
        item = QtWidgets.QTableWidgetItem()
        item.setTextAlignment(QtCore.Qt.AlignmentFlag.AlignCenter)
        item.setFlags(QtCore.Qt.ItemFlag.ItemIsSelectable|QtCore.Qt.ItemFlag.ItemIsDragEnabled|QtCore.Qt.ItemFlag.ItemIsDropEnabled|QtCore.Qt.ItemFlag.ItemIsUserCheckable|QtCore.Qt.ItemFlag.ItemIsEnabled)
        self.TableWidget.setItem(5, 1, item)
        item = QtWidgets.QTableWidgetItem()
        item.setTextAlignment(QtCore.Qt.AlignmentFlag.AlignCenter)
        item.setFlags(QtCore.Qt.ItemFlag.ItemIsSelectable|QtCore.Qt.ItemFlag.ItemIsDragEnabled|QtCore.Qt.ItemFlag.ItemIsDropEnabled|QtCore.Qt.ItemFlag.ItemIsUserCheckable|QtCore.Qt.ItemFlag.ItemIsEnabled)
        self.TableWidget.setItem(6, 0, item)
        item = QtWidgets.QTableWidgetItem()
        item.setTextAlignment(QtCore.Qt.AlignmentFlag.AlignCenter)
        item.setFlags(QtCore.Qt.ItemFlag.ItemIsSelectable|QtCore.Qt.ItemFlag.ItemIsDragEnabled|QtCore.Qt.ItemFlag.ItemIsDropEnabled|QtCore.Qt.ItemFlag.ItemIsUserCheckable|QtCore.Qt.ItemFlag.ItemIsEnabled)
        self.TableWidget.setItem(6, 1, item)
        self.TableWidget.horizontalHeader().setCascadingSectionResizes(True)
        self.TableWidget.horizontalHeader().setDefaultSectionSize(200)
        self.TableWidget.horizontalHeader().setHighlightSections(True)
        self.TableWidget.horizontalHeader().setMinimumSectionSize(24)
        self.TableWidget.horizontalHeader().setSortIndicatorShown(False)
        self.TableWidget.horizontalHeader().setStretchLastSection(True)
        self.TableWidget.verticalHeader().setVisible(False)
        self.TableWidget.verticalHeader().setCascadingSectionResizes(True)
        self.TableWidget.verticalHeader().setDefaultSectionSize(65)
        self.TableWidget.verticalHeader().setHighlightSections(False)
        self.TableWidget.verticalHeader().setSortIndicatorShown(False)
        self.TableWidget.verticalHeader().setStretchLastSection(False)
        self.gridLayout.addWidget(self.TableWidget, 1, 0, 1, 1)
        self.BodyLabel = BodyLabel(parent=self.ElevatedCardWidget)
        self.BodyLabel.setObjectName("BodyLabel")
        self.gridLayout.addWidget(self.BodyLabel, 0, 0, 1, 1)
        self.gridLayout_2.addWidget(self.ElevatedCardWidget, 1, 0, 1, 1)

        self.retranslateUi(InfoPage)
        QtCore.QMetaObject.connectSlotsByName(InfoPage)

    def retranslateUi(self, InfoPage):
        _translate = QtCore.QCoreApplication.translate
        InfoPage.setWindowTitle(_translate("InfoPage", "Form"))
        self.LargeTitleLabel.setText(_translate("InfoPage", "关于"))
        self.TableWidget.setSortingEnabled(False)
        item = self.TableWidget.verticalHeaderItem(0)
        item.setText(_translate("InfoPage", "GUI框架"))
        item = self.TableWidget.verticalHeaderItem(1)
        item.setText(_translate("InfoPage", "数据库"))
        item = self.TableWidget.verticalHeaderItem(2)
        item.setText(_translate("InfoPage", "控件库"))
        item = self.TableWidget.verticalHeaderItem(3)
        item.setText(_translate("InfoPage", "excel编辑库"))
        item = self.TableWidget.verticalHeaderItem(4)
        item.setText(_translate("InfoPage", "编程语言"))
        item = self.TableWidget.verticalHeaderItem(5)
        item.setText(_translate("InfoPage", "开发工具"))
        item = self.TableWidget.verticalHeaderItem(6)
        item.setText(_translate("InfoPage", "图标"))
        item = self.TableWidget.horizontalHeaderItem(0)
        item.setText(_translate("InfoPage", "所用项目"))
        item = self.TableWidget.horizontalHeaderItem(1)
        item.setText(_translate("InfoPage", "项目地址"))
        __sortingEnabled = self.TableWidget.isSortingEnabled()
        self.TableWidget.setSortingEnabled(False)
        item = self.TableWidget.item(0, 0)
        item.setText(_translate("InfoPage", "PyQt6"))
        item = self.TableWidget.item(0, 1)
        item.setText(_translate("InfoPage", "https://www.riverbankcomputing.com/software/pyqt/"))
        item = self.TableWidget.item(1, 0)
        item.setText(_translate("InfoPage", "sqlite3"))
        item = self.TableWidget.item(1, 1)
        item.setText(_translate("InfoPage", "https://www.sqlite.org/index.html"))
        item = self.TableWidget.item(2, 0)
        item.setText(_translate("InfoPage", "PyQt-Fluent-widget"))
        item = self.TableWidget.item(2, 1)
        item.setText(_translate("InfoPage", "https://github.com/zhiyiYo/PyQt-Fluent-Widgets"))
        item = self.TableWidget.item(3, 0)
        item.setText(_translate("InfoPage", "xlwt"))
        item = self.TableWidget.item(3, 1)
        item.setText(_translate("InfoPage", "https://github.com/python-excel/xlwt"))
        item = self.TableWidget.item(4, 0)
        item.setText(_translate("InfoPage", "Python"))
        item = self.TableWidget.item(4, 1)
        item.setText(_translate("InfoPage", "https://www.python.org/"))
        item = self.TableWidget.item(5, 0)
        item.setText(_translate("InfoPage", "Visual Studio Code"))
        item = self.TableWidget.item(5, 1)
        item.setText(_translate("InfoPage", "https://code.visualstudio.com/"))
        item = self.TableWidget.item(6, 0)
        item.setText(_translate("InfoPage", "教育类图标"))
        item = self.TableWidget.item(6, 1)
        item.setText(_translate("InfoPage", "https://www.iconfont.cn/search/index?searchType=icon&q=%E6%95%99%E8%82%B2"))
        self.TableWidget.setSortingEnabled(__sortingEnabled)
        self.BodyLabel.setText(_translate("InfoPage", "使用的项目。没有这些项目我也不会能做出这个作业，再次鸣谢以下项目"))
from qfluentwidgets import BodyLabel, ElevatedCardWidget, HorizontalSeparator, LargeTitleLabel, TableWidget
