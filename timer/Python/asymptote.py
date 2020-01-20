import datetime

p = int(input("\"p\" value: "))
n = int(input("\"n\" value: "))

date1 = int(datetime.datetime.now().microsecond)

u = (2*n + 3)/(n + 1)

while abs(u - 2) >= pow(10, -p):
    n += 1
    u = (2*n + 3)/(n + 1)

date = (int(datetime.datetime.now().microsecond) - date1) / 100
print(n)
print(str(date) + "ms")