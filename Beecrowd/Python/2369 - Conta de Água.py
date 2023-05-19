n = int(input())
v1 = 7
v2 = 20
v3 = 70*2
if (n <= 10):
    valor = 7
if (n > 10 and n <= 30):
    valor = (n-10) + 7
if (n > 30 and n <= 100):
    valor = (n-30)*2 + 27
if (n > 100):
    valor = (n-100)*5 + 167
print(valor)