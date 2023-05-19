a,b = map(int, input().split())
if (b >= 0 and b <= 2):
    print("nova")
elif (b >= 97 and b <= 100):
    print("cheia")
elif (b > a):
    print("crescente")
else:
    print("minguante")