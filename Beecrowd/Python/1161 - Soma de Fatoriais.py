def fat(n):
    if (n==0):
        return 1
    return n*fat(n-1)

while True:
    try:
        n, m = map(int, input().split())
        fatorial = fat(n) + fat(m)
        print (fatorial)
    except EOFError:
        break