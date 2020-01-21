x,y = map(int,input().split())

for i in range(1,x,2):
    print(str(".|."*i).center(y,'-'))

print ('WELCOME'.center(y,'-'))

for i in range(x-2,-1,-2):
    print(str(".|."*i).center(y,'-'))
