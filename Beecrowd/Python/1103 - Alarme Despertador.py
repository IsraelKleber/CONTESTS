while True:
    H1, M1,H2, M2 = map(int, input().split())
    if (H1 == M1 == H2 == M2 == 0):
        break
    else:
        dormir = (H1 * 60) + M1
        acordar =(H2 * 60) + M2
        if(acordar < dormir):
            acordar += 24 * 60
    print(acordar - dormir)