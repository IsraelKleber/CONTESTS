n = int(input())
fb = [0, 1]
for i in range(0, n-2):
    px = fb[i] + fb[i+1]
    fb.append(px)
print(*fb)