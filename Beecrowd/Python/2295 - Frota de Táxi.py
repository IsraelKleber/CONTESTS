A, G, RA, RG = map(float, input().split())
VA = A/RA
VG = G/RG
if (VA < VG):
    print("A")
elif (VA >= VG):
    print("G")