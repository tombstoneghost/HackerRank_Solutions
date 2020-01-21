n = int(input())
s = set(map(int, input().split()))

c = int(input())

for i in range(c):
    command = input().split()

    if(command[0] == "pop"):
        s.pop()
    if(command[0] == "remove"):
        s.remove(int(command[1]))
    if(command[0] == "discard"):
        s.discard(int(command[1]))

sum = 0

for i in s:
    sum = sum + i

print (sum)
