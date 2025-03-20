from sqlite3 import connect, Connection, Cursor, Row
from Class.Student import Student
from os import path, mkdir

FILE_PATH = "Data"
DATABASE_FILE = "database.db"
DATABASE_FILE_PATH = path.join(FILE_PATH, DATABASE_FILE)


def initDatabase() -> Connection:
    """连接数据库并返回连接"""
    if not path.exists(FILE_PATH):
        mkdir(FILE_PATH)
    db = connect(DATABASE_FILE_PATH, check_same_thread=False)
    cursor = db.cursor()
    cursor.execute(
        """
        CREATE TABLE IF NOT EXISTS users (
            student_id TEXT,
            student_name TEXT NOT NULL,
            major TEXT NOT NULL,
            grade TEXT NOT NULL,
            age INTEGER NOT NULL,
            gpa DOUBLE NOT NULL
        )
    """
    )
    return db


def insertStudent(db: Connection, cursor: Cursor, student: Student) -> bool:
    """插入一个学生"""
    sql = (
        "insert into [TABLE]([student_id], [student_name], [major], [grade], [age], [gpa]) "
        + "values('%s', '%s', '%s', '%s', %d, %f)"
    )
    try:
        for row in searchStudent(db, cursor):
            # 判断学号是否存在
            if student.studentId in row:
                return False
        cursor.execute(sql % student.toTuple())
        db.commit()
        return True
    except:
        db.rollback()
        return False


def searchStudent(db: Connection, cursor: Cursor, command: str = "") -> list[Row]:
    """查找学生"""
    sql = (
        "select [student_id], [student_name], [major], [grade], [age], [gpa] from [TABLE]"
        + command
    )
    try:
        cursor.execute(sql)
        return cursor.fetchall()
    except:
        db.rollback()
        return []


def deleteStudent(db: Connection, cursor: Cursor, studentId: str) -> None:
    """删除学生"""
    sql = "delete from [TABLE] where [student_id] = '{}'".format(studentId)
    try:
        cursor.execute(sql)
        db.commit()
    except:
        db.rollback()


def updateStudent(db: Connection, cursor: Cursor, command: str) -> None:
    """更新学生信息"""
    sql = "update [TABLE] set " + command
    try:
        cursor.execute(sql)
        db.commit()
    except:
        db.rollback()
