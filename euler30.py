# Projext Euler 
# Digit fifth Power

def dfp(x):
    s = str(x)
    sum = 0
    for i in s:
        sum += (int(i)**5)
    if(x == sum):
        return True
    return False

def calc():
    total = 0
    for i in range(2 , 1000000):
        if dfp(i) == True:
            total += i
    return total

print(calc())