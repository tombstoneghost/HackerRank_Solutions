from itertools import combinations

raw = input().split()

word = raw[0]
size = int(raw[1])

flist = list()

for s in range(1,size+1):
    result = combinations(sorted(word),s)

    for res in result:
        flist.append(res)

    for element in flist:
        print(''.join(element))

    flist.clear()

