cartas = list(map(int, input().split()))

if(cartas[0] > cartas[1] > cartas[2] > cartas[3] > cartas[4]):
   ordem = "D"
elif(cartas[4] > cartas[3] > cartas[2] > cartas[1] > cartas[0]):
   ordem = "C"
else: 
   ordem = "N"

print(ordem)