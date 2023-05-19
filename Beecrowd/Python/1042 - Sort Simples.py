v1, v2, v3 = map (int, input().split())
if (v1 > v2 and v2 > v3 and v1 > v3):
    print(v3)
    print(v2)
    print(v1)
elif (v1 > v2 and v2 < v3 and v1 > v3):
    print(v2)
    print(v3)
    print(v1)
elif (v1 < v2 and v2 < v3):
    print(v1)
    print(v2)
    print(v3)
elif (v1 < v2 and v2 > v3 and v1 > v3):
    print(v3)
    print(v1)
    print(v2)
elif (v1 < v3 and v3 < v2):
    print(v1)
    print(v3)
    print(v2)
elif (v1 < v3 and v3 > v2 and v1 > v2):
    print(v2)
    print(v1)
    print(v3)
print()
print(v1)
print(v2)
print(v3)