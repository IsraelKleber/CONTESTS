a,b,c = map(int, input().split())

if (a + b > c and c > abs(a-b) or 
    a + c > b and b > abs(a-c) or 
    b + c > a and a > abs(b-c)):
    
    if (a > b and a > c):
        if (a**2 == b**2 + c**2):
            print("r")
        elif (a**2 > b**2 + c**2):
            print("o")
        elif (a**2 < b**2 + c**2):
            print("a")
    
    if (b > a and b > c):
        if (b**2 == a**2 + c**2):
            print("r")
        elif (b**2 > a**2 + c**2):
            print("o")
        elif (b**2 < a**2 + c**2):
            print("a")

    if (c > a and c > b):
        if (c**2 == a**2 + b**2):
            print("r")
        elif (c**2 > a**2 + b**2):
            print("o")
        elif (c**2 < a**2 + b**2):
            print("a")

    if (a == b == c):
        if (a**2 < b**2 + c**2):
            print("a")
else:
    print ("n")