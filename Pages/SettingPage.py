from qfluentwidgets import (
    setThemeColor,
    SettingCardGroup,
    OptionsSettingCard,
    ColorSettingCard,
    FluentIcon,
    ScrollArea,
    ExpandLayout,
    FluentIcon,
    setTheme
)
from PyQt6.QtWidgets import QWidget
from PyQt6.QtCore import Qt
from Shared.config import cfg, getTransparentQss


class SettingPage(ScrollArea):
    """设置页面，基于滚动视图手动设计"""
    def __init__(self, parent=None):
        super().__init__(parent=parent)
        self.setObjectName("SettingPage")
        # 布局
        self.scrollWidget = QWidget()
        self.scrollWidget.setObjectName("scrollWidget")
        self.expandLayout = ExpandLayout(self.scrollWidget)
        self.expandLayout.setObjectName("expandLayout")
        # 设置卡片段
        self.settingCardGroup = SettingCardGroup("个性化设置", self.scrollWidget)
        self.settingCardGroup.setObjectName("settingCardGroup")
        # 卡片，展开后才附加显示
        self.themeCard = OptionsSettingCard(
            cfg.themeMode,
            title="主题",
            content="更改应用程序的主题",
            icon=FluentIcon.BRUSH,
            texts=["亮色", "深色", "跟随系统设置"],
            parent=self.settingCardGroup,
        )
        self.themeCard.setObjectName("themeCard")
        # 卡片，展开前显示
        self.themeColorCard = ColorSettingCard(
            cfg.themeColor,
            icon=FluentIcon.PALETTE,
            title="主题色",
            content="更改应用程序的主题色",
            parent=self.settingCardGroup,
        )
        self.setObjectName("themeColorCard")

        self.initWidget()

    def initWidget(self):
        self.setHorizontalScrollBarPolicy(Qt.ScrollBarPolicy.ScrollBarAlwaysOff) 
        self.setWidget(self.scrollWidget)
        self.setWidgetResizable(True)
        #利用qss设置页面背景和边框，不然会有默认背景色和奇怪的边框
        self.setStyleSheet(getTransparentQss())
        
        self.settingCardGroup.addSettingCard(self.themeCard)
        self.settingCardGroup.addSettingCard(self.themeColorCard)
        self.expandLayout.addWidget(self.settingCardGroup)

        # 更换主题事件
        self.themeCard.optionChanged.connect(lambda it: setTheme(cfg.get(it)))
        self.themeColorCard.colorChanged.connect(setThemeColor)
