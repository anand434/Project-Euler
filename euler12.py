import math
from time import time
t = time()


def divisor(n):
    number_of_factor = 0;
    for i in range(1 , int(math.ceil(math.sqrt(n)))):
        if n % i == 0:
            number_of_factor += 2
        else:
            continue
    return number_of_factor

x = 1
for y in range(2,1000000):
    x += y
    if divisor(x) >= 500:
        print(x)
        break
tt = time() - t
print(tt)