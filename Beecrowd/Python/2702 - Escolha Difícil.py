c, b, p = map(int, input().split())
cr, br, pr = map(int, input().split())
valor = 0
r1 = c-cr
r2 = b-br
r3 = p-pr
if (r1 < 0):
    valor = r1
if (r2 < 0):
    valor += r2
if (r3 < 0):
    valor += r3
print(-valor)