import sys

inp = sys.stdin.read().split()
if inp:
    a = int(inp[0])
    b = int(inp[1])

    q = a // b
    r = a % b

    if r < 0:

        if b > 0:
            q-=1
            r+=b
            
        else:
            q+=1
            r-=b

    print("{} {}".format(q, r))
