from collections import Counter

nShoes = int(input())
ShoeSize = Counter(map(int, input().split()))
nCustomers = int(input())
profit = 0

for i in range(nCustomers):
    (size, price) = map(int, input().split())

    if(ShoeSize[size] > 0):
        ShoeSize[size] -= 1
        profit += price
    
print(profit)
