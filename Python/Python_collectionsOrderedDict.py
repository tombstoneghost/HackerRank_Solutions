from collections import OrderedDict

items = int(input())

od = OrderedDict()

for i in range(items):
    item = input().split()

    itemName = " ".join(item[:-1])
    itemPrice = int(item[-1])

    if(od.get(itemName)):
        od[itemName] += itemPrice
    else:
        od[itemName] = itemPrice

for i in od.keys():
    print(i, od[i])
