import re

testCases = int(input())

for i in range(testCases):
    try:
        re.compile(input())
        print(True)
    except:
        print(False)
