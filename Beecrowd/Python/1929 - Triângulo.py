a,b,c,d = map(int, input().split())
if (a + b > c and c > abs(a-b) or a + b > d and d > abs(a-b)):
    print ("S")
elif (a + c > b and b > abs(a-c) or a + c > d and d > abs(a-c)):
    print ("S")
elif (a + d > b and b > abs(a-d) or a + d > c and c > abs(a-d)):
    print ("S")
elif (b + c > a and a > abs(b-c) or b + c > d and d > abs(b-c)):
    print ("S")
elif (b + d > a and a > abs(b-d) or b + d > c and c > abs(b-d)):
    print ("S")
elif (c + d > a and a > abs(c-d) or c + d > b and b > abs(c-d)):
    print ("S")
else:
    print ("N")