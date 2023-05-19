qtd_teste = int(input())
ratos = 0
sapos = 0
coelhos = 0
for i in range(1, qtd_teste+1):
    qtd_teste, cobaia = map(str, input().split())
    if (cobaia =="C"):
        coelhos = coelhos + int(qtd_teste)
    if(cobaia == "R"):
        ratos = ratos + int(qtd_teste)
    if(cobaia == "S"):
        sapos = sapos + int(qtd_teste)

cobaias = ratos + sapos + coelhos

print("Total: {:d} cobaias".format(cobaias))
print("Total de coelhos: {:d}".format(coelhos))
print("Total de ratos: {:d}".format(ratos))
print("Total de sapos: {:d}".format(sapos))
print("Percentual de coelhos: {:.2f} %".format((coelhos / cobaias)*100))
print("Percentual de ratos: {:.2f} %".format((ratos / cobaias)*100))
print("Percentual de sapos: {:.2f} %".format((sapos / cobaias)*100))