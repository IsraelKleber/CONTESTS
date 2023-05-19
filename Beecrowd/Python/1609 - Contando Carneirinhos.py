T = int(input())
while T > 0:
    T -= 1
    N = int(input())
    contador = [int(tp) for tp in input().split()]
    print(len(set(contador)))