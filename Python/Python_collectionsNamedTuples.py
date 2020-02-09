from collections import namedtuple

nStudents = int(input())
columns = ','.join(input().split())

Student = namedtuple('Student', columns)

total = 0

for i in range(nStudents):
    line = input().split()
    student = Student(*line)
    total += int(student.MARKS)

print(total/nStudents)
