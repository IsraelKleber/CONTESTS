p, r = map(int, input().split())
if (p == 1 and r == 1):
    print("A")
elif (p == 1 and r == 0):
    print("B")
elif (p == 0 and r == 1 or r == 0):
    print("C")