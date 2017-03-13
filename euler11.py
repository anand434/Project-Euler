# Project Euler
# problem - 11

import math
from math import ceil


def is_prime(num):
    top = int(ceil(math.sqrt(num)))
    for x in range(3,top+1,2):
        if num%x == 0:
            return False
    return True

def primes(max = 10):
    yield 2
    found = 1
    current = 3
    while current < max :
        if is_prime(current):
            yield current
            found += 1
        current += 2

print(sum(primes(2000000)))