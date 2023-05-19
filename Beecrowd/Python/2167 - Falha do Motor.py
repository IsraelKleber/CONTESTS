med = int(input())
RPM = list(map(int, input().split()))
queda = 0

for i in range(1, len(RPM)):
   if (RPM[i] < RPM[i - 1]):
      queda = RPM.index(RPM[i]) + 1
      break

print(queda)