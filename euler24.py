# Lexicographic permutations

def fill_in(letter , word):
    perm = []
    for i in range(len(word)+1):
        the_word = word[0 : i] + letter + word[i : ]
        if the_word[0] == '2':
            perm.append(the_word)
    return perm

def perm(string):
    #find all permutations
    perm_list = []
    for i in string:
        if len(perm_list) == 0:
            perm_list.append(i)
        else:
            temp = []
            while (len(perm_list) != 0):
                temp = temp + fill_in (i , perm_list.pop())
            perm_list = temp
    return temp

j = perm("2013456789")
j.sort()
print(j[1000000])
