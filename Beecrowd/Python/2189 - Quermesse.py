N_pessoas = -1
teste = 0

while (N_pessoas != 0):
    teste = teste + 1
    N_pessoas = int(input())
    if (N_pessoas != 0):
        ordem_entra = list(map(int, input().split()))
        participantes = len(ordem_entra)
        for i in range(0, N_pessoas):
            if (ordem_entra[i]== i + 1):
                print("Teste", teste)
                print(i + 1)
                print("")