while True:
    try:
        n = int(input())
        m = list(map(int, input().split()))
        velo = max(m)

        if (velo < 10):
            velocidade = "1"
        elif (velo >= 10 and velo < 20):
            velocidade = "2"
        elif (velo >= 20):
            velocidade = "3"
        print(velocidade)
    except EOFError:
        break