import math

number = complex(input())

a = number.real
b = number.imag

r = math.hypot(a,b)
theta = math.atan2(b,a)

print(r)
print(theta)

