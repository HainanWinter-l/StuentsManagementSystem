from qfluentwidgets import QConfig, qconfig

global cfg
global database
import sys
import os


def resourcePath(relativePath: str):
    if getattr(sys, "frozen", False):  # 是否Bundle Resource
        basePath = sys._MEIPASS
    else:
        basePath = os.path.dirname(os.path.abspath(os.path.join(__file__, "..")))
    return os.path.join(basePath, relativePath)


# 应用程序配置
cfg = QConfig()
qconfig.load("config.json", cfg)


def getTransparentQss() -> str:
    """返回透明背景，无边框的qss"""
    return "background-color: transparent; border: none"
