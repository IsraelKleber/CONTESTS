n1 = '1'
n2 = '1'

while (True):
    n1, n2 = input().split()

    if (n1 == '0' and n2 == '0'):
        break
   
    while (len(n1) > 1):
        n0 = 0
        for i in n1:
            n0 += int(i)
        n1 = str(n0)
       
    while (len(n2) > 1):
        m0 = 0
        for i in n2:
            m0 += int(i)
            
        n2 = str(m0)

    if(int(n1) == int(n2)):
        print(0)
        
    elif(int(n1) > int(n2)):
        print(1)
        
    else:
        print(2)