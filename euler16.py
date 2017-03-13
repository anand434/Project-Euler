# Project Euler
# problem - 16


def sumt(s):
    ss = 0
    str1 = str(s)
    for i in str1:
        ss += int(i)
    return ss

t = 2**1000
print(sumt(t))
