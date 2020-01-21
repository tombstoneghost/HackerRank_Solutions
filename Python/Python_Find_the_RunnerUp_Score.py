n = int(input())
arr = map(int, input().split())
arr = list(arr)

high = max(arr)

final_list = set(arr)

final_list.remove(max(final_list))

print(max(final_list))
