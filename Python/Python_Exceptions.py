testCases = int(input())

for i in range(testCases):
    (a,b) = input().split()
    try:
        print(int(a)//int(b))
    except ZeroDivisionError as e:
        print("Error Code:", e)
    except ValueError as e:
        print("Error Code:", e)
