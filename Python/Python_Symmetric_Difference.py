n = int(input())

nSet = set(map(int,input().split()))

m = int(input())

mSet = set(map(int,input().split()))

fList = list(nSet.difference(mSet)) + list(mSet.difference(nSet))

fList.sort()

for i in fList:
    print(i)
