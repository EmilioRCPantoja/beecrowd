a = "abcABCy"
b = ""

for char in a:

    n = ord(char) + 3
    b += chr(n)

c=""

a=list(a)

i=1

for i in range(len(a)):
    c+=a[(len(a)-1)-i]


print(c)  

