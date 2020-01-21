T = int(input())

Res = list()

for i in range(T):
    A = int(input())
    ASet = set(map(int, input().split()))
    B = int(input())
    BSet = set(map(int, input().split()))

    flag = 0

    if(ASet.issubset(BSet)):
        flag = 1
    
    if(flag):
        print("True")
    else:
        print("False")
