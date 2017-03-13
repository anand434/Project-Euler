# Project Euler 
# Problem 22 

from string import ascii_uppercase
 
def score(word) : 
    return sum(ascii_uppercase.index(c) +1 for c in word.strip('"'))

with open('PE22_names.txt') as f :
    names = f.read().split(',')
    names.sort()

print(sum(i*score(x) for i , x in enumerate(names , 1)))

# CLEAR ANSWER :  871198282