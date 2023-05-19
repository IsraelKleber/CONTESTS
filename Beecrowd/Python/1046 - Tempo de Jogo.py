hi, hf = map(int, input().split())
duracao = (24 + hf)-hi
if (duracao > 24):
    print ("O JOGO DUROU {:.0f} HORA(S)".format(duracao - 24))
else:
    print ("O JOGO DUROU {:.0f} HORA(S)".format(duracao))