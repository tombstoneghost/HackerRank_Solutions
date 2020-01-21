n = int(input())

nSet = set(map(int,input().split()))

t = int(input())

for i in range(t):
    op = input().split()
    opSet = set(map(int,input().split()))

    if(op[0] == "update"):
        nSet.update(opSet)
    
    if(op[0] == "intersection_update"):
        nSet.intersection_update(opSet)
        
    if(op[0] == "symmetric_difference_update"):
        nSet.symmetric_difference_update(opSet)
        
    if(op[0] == "difference_update"):
        nSet.difference_update(opSet)

print(sum(nSet))
