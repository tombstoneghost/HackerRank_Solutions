def isPallindrome(x):
    if int(str(x)[::-1]) is x:
        return True
    return False

def isPositive(x):
    if x>0:
        return True
    return False

n = int(input())

numbers = list(map(int, input().split()))

if all([isPositive(x) for x in numbers]):
    if any([isPallindrome(x) for x in numbers]):
        print (True)
    else:
        print (False)
else:
    print (False)
