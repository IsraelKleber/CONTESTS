Jogadores, Rodadas = map(int, input().split())
pontuacao = list(map(int, input().split())) 

Pontos = [0] * Jogadores 

for i in range(Jogadores):
    Pontos[i] = sum(pontuacao[i::Jogadores]) 

Pontos = Pontos[::-1]
Vencedor = Jogadores - Pontos.index(max(Pontos))
print(Vencedor)