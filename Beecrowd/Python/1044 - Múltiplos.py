a,b = map(int, input().split(" "))
divisao = a/b
rest = a%b
divisao1 = b/a
rest1 = b%a
if (rest == 0 or rest1 == 0):
    print("Sao Multiplos")
else:
    print("Nao sao Multiplos")