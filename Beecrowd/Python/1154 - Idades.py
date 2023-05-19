x = 1
y = 0
soma = 0
while (x >= 0):
    x = int(input())
    if(x > 0):
        y = y + 1
        soma = soma + x
        media = soma / y
print("{:.2f}".format(media))