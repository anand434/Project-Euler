# Project Euler
# Factorial Digit Sum

def factorial(x):
    fact = 1
    while x > 0:
        fact *= x
        x -= 1
    return fact

def sum(ss):
    s = 0
    for i in ss:
        s += int(i)
    return s

print(int(sum(str(factorial(100)))))

