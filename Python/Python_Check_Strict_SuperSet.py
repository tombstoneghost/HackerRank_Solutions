A = set(map(int, input().split()))

T = int(input())

result = True

for i in range(T):
    s = set(map(int, input().split()))
    if not s.issubset(A):
        result = False
    if len(s)>=len(A):
        result = False

print(result)
