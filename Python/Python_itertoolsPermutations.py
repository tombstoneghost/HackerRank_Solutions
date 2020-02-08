from itertools import permutations

raw = input().split()

word = raw[0]
size = int(raw[1])

result = permutations(word, size)

w = list()
temp = ""

for res in result:
    for l in range(0,len(res)):
        temp = temp + res[l]
    w.append(temp)
    temp = ""

w.sort()

for f in w:
    print(f)
