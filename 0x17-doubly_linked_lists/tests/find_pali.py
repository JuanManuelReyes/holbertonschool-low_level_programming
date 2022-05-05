#!/usr/bin/python3
num = 0
for i in range(999, 100, -1):
    for x in range(i, 100, -1):
        mul = i * x
        if mul > num:
            res = str(i * x)
            if res == res[::-1]:
                num = i * x
print(num)
