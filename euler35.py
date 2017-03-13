from math impoer ceil

def is_prime(num):
    top = int(ceil(math.sqrt(num)))
    for x in range(3,top+1,2):
        if num%x == 0:
            return False
    return True