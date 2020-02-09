import re

test = int(input())

for i in range(test):
    st = input()
    print(bool(re.match(r'^[+-]?\d*?\.{1}\d+$',st)))
