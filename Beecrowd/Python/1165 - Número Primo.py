n = int(input())
for i in range(1, n+1):
    x = int(input())
    div = 0

    for i in range(1, x+1):
        if(x%i==0):
            div = div + 1

    if (div==2):
        print("{:d} eh primo".format(x))
    else:
        print("{:d} nao eh primo".format(x))
