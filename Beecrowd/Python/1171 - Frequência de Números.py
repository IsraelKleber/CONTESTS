x = int(input())
contador = []

for i in range (x):
    y = int(input())
    contador.append(y)
    
z = sorted(set(contador))

for n in range (len(z)):
    print("{:d} aparece {:d} vez(es)".format((z[n]), contador.count(z[n])))