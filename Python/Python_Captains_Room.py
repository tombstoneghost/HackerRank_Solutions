K = int(input())

roomList = list(map(int,input().split()))

freq = {}

for room in roomList:
    if(room in freq):
        freq[room] = freq[room] + 1
    else:
        freq[room] = 1

for key,value in freq.items():
    if value == 1:
        print(key)
