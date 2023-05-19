n = int(input())
i = 0
aumento_a = 0 
aumento_b = 0
for i in range(1, n+1):
    PA, PB, GA, GB = map(float, input().split())
    i = 0
    while(PA <= PB):
        aumento_a = (PA*GA)//100
        aumento_b = (PB*GB)//100

        PA = aumento_a + PA
        PB = aumento_b + PB
        i = i + 1

    if (i <= 100):
        print("{:d} anos.".format(i))
    else:
        print("Mais de 1 seculo.")