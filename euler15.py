# Project Euler
# Problem - 15

def fact(n):
    fact = 1
    for i in range(1,n+1):
        fact *= i
    return fact

def comb(x):
    noOfComb = fact(x*2)/(fact(x)*fact(x))
    return int(noOfComb)

print(comb(20))