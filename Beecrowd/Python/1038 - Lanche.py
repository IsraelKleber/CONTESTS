a,b=map(int,input().split(" "))
if(a==1):
    valor = float(4.0*b)
if(a==2):
    valor = float(4.5*b)
if(a==3):
    valor = float(5.0*b)
if(a==4):
    valor = float(2.0*b)
if(a==5):
    valor = float(1.5*b)
print("Total: R$ {:.2f}".format(valor))