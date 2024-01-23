# winterl's homework

## 一个用python, pyqt, sqlite3实现的学生管理系统

实现了一个简单的学生系统，使用PyQt6作为应用的前端显示，通过Python和sqlite3数据库交互，实现数据的查看，增加，删除，查询，修改功能。此外，还实现了主题和主题色功能，以及通过xlwt实现了数据的导出为excel表格功能

## 所用开源项目

[PyQt6](https://www.riverbankcomputing.com/software/pyqt/)

[sqlite3](https://www.sqlite.org/index.html)

[PyQt-Fluent-Widget](https://github.com/zhiyiYo/PyQt-Fluent-Widgets)

[xlwt](https://github.com/python-excel/xlwt)

## 开始

### 说明

本项目提供了python venv环境（目录下env文件夹中），可直接切换虚拟环境运行程序

### 若要自行搭建环境运行，请参考以下代码

```shell
# 安装项目的依赖
pip install -r requirements.txt
# 运行代码
python -u Program.py
# 构建项目
pyinstaller Program.spec
```

## 开源协议

MIT
