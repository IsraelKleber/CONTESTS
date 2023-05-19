P1, C1, P2, C2 = map(int, input().split())
equi = P1*C1
equi1 = P2*C2
if (equi == equi1):
    print ("0")
if (equi > equi1):
    print ("-1")
if (equi < equi1):
    print ("1")