from collections import deque

nCommands = int(input())

d = deque()

for i in range(nCommands):
    command = input().split()

    if(command[0] == "append"):
        d.append(command[1])
    
    if(command[0] == "appendleft"):
        d.appendleft(command[1])
    
    if(command[0] == "pop"):
        d.pop()

    if(command[0] == "popleft"):
        d.popleft()

for i in d:
    print(i, end = ' ')
