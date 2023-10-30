from qfluentwidgets import QConfig, qconfig

global cfg
global database

# 应用程序配置
cfg = QConfig()
qconfig.load("config.json", cfg)

def getTransparentQss() -> str:
    """返回透明背景，无边框的qss"""
    return "background-color: transparent; border: none"
