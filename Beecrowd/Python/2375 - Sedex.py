n = int(input())
a1, a2, a3 = map(int, input().split())
if  (n <= a1 and n <= a2 and n <= a3):
    print("S")
else:
    print("N")