n = int(input())

data = dict()

for i in range(n):
    tokens = input().split()

    name = tokens[0]

    data[name] = float(tokens[1]) + float(tokens[2]) + float(tokens[3])

student = input()

print("{0:.2f}".format(data[student]/3))
