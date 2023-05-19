x,y = map(float,input().split())
if (x == 0.0 and y == 0.0):
    resposta = "Origem"
elif (x != 0.0 and y == 0.0):
    resposta = "Eixo X"
elif (x == 0.0 and y != 0.0):
    resposta = "Eixo Y"
elif (x > 0.0 and y > 0.0):
    resposta = "Q1"
elif (x < 0.0 and y > 0.0):
    resposta = "Q2"
elif (x < 0.0 and y < 0.0):
    resposta = "Q3"
elif (x > 0.0 and y < 0.0):
    resposta = "Q4"
print(resposta)