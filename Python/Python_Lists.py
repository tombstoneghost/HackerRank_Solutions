n = int(input())

mylist = list()

for i in range(n):
    command = input().split()

    if(command[0] == "insert"):
        mylist.insert(int(command[1]),int(command[2]))
    if(command[0] == "print"):
        print(mylist)
    if(command[0] == "remove"):
        mylist.remove(int(command[1]))
    if(command[0] == "append"):
        mylist.append(int(command[1]))
    if(command[0] == "sort"):
        mylist.sort()
    if(command[0] == "pop"):
        mylist.pop()
    if(command[0] == "reverse"):
        mylist.reverse()
    
    

