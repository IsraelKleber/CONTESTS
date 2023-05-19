def conta_divisores_rec(n,d):
    if(d==1):
        return [1]
    lista_div = conta_divisores_rec(n,d-1)
    if (n%d==0):
        lista_div.append(d)
    return lista_div

def conta_divisores(n):
    return (conta_divisores_rec(n,n))

n = int(input())
qtd_divisores = conta_divisores(n)
print (*qtd_divisores, sep='\n')