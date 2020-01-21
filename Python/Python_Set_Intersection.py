n = int(input())

nSet = set(map(int,input().split()))

b = int(input())

bSet = set(map(int,input().split()))

fSet = nSet.intersection(bSet)

print(len(fSet))
