# Project Euler
# Problem - 09

x = 1000
for a in range(1,x+1):
    for b in range(1,x+1):
        c = (a**2+b**2)**0.5
        if a+b+c == x:
            if a > b:
                print(str(a))
                print(str(b))
                print(str(int(c)))
                print(int(a*b*c))
                break