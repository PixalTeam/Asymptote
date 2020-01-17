p = int(input("\"p\" value: "))
n = int(0)
u = int(3)

while abs(u - 2) >= pow(10, -p):
    n += 1
    u = (2*n + 3)/(n + 1)

print(n)