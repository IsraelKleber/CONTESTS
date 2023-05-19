a,b,c = map(int, input().split())
if (a==b or a==c or b==c or a+b==c or a+c==b or c+b==a or a==b==c):
    print("S")
elif (a==0 or b==0 or c==0 or a-b==c or a-c==b or c-b==a):
    print("S")
else:
    print("N")