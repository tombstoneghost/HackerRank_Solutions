def average(array):
    array = set(array)
    size = len(array)
    sum  = 0

    for i in array:
        sum = sum + i
    
    return sum/size

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    result = average(arr)
    print(result)
