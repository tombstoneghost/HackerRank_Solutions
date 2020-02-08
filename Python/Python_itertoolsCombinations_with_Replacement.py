from itertools import combinations_with_replacement

raw = input().split()

word = raw[0]
size = int(raw[1])

result = combinations_with_replacement(sorted(word), size)

for res in result:
    print(''.join(res))
