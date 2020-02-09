N, X = map(int, input().split())

subjects = list()

for i in range(X):
    subjects.append(list(map(float, input().split())))

students = tuple(zip(*subjects))

for i in range(N):
    marks = 0.0
    for j in range(X):
        marks += students[i][j]
    
    print( marks/X)
