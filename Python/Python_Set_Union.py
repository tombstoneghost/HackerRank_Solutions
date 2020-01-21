n = int(input())

nSet = set(map(int,input().split()))

b = int(input())

bSet = set(map(int,input().split()))

fSet = nSet.union(bSet)

print(len(fSet))
