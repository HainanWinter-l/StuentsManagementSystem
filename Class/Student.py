class Student:
    def __init__(self) -> None:
        self.studentId = ""
        self.name = ""
        self.major = ""
        self.grade = ""
        self.age = 0
        self.gpa = 0.0

    @classmethod
    def fromArgv(
        cls, studentId: str, name: str, major: str, grade: str, age: int, gpa: float
    ):
        obj = cls()
        obj.studentId = studentId
        obj.name = name
        obj.major = major
        obj.grade = grade
        obj.age = age
        obj.gpa = gpa
        return obj

    @classmethod
    def fromTuple(cls, info: tuple[str, str, str, str, int, float]):
        obj = cls()
        obj.studentId = info[0]
        obj.name = info[1]
        obj.major = info[2]
        obj.grade = info[3]
        obj.age = info[4]
        obj.gpa = info[5]
        return obj

    @classmethod
    def fromDict(cls, info: dict):
        obj = cls()
        for attr, val in info.items():
            setattr(obj, attr, val)
        return obj

    def toTuple(self) -> tuple[str, str, str, str, int, float]:
        return (self.studentId, self.name, self.major, self.grade, self.age, self.gpa)

    def toDict(self) -> dict:
        return dict(
            studentId=self.studentId,
            name=self.name,
            major=self.major,
            grade=self.grade,
            age=self.age,
            gpa=self.gpa,
        )
