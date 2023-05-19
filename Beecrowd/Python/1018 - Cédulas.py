n = int(input())
n100 = n//100
res100 = n%100
n50 = res100//50
res50 = res100%50
n20 = res50//20
res20 = res50%20
n10 = res20//10
res10 = res20%10
n5 = res10//5
res5 = res10%5
n2 = res5//2
res2 = res5%2
n1 = res2//1 
res1 = res2%1  
print(n)
print("{:d} nota(s) de R$ 100,00".format(n100))
print("{:d} nota(s) de R$ 50,00".format(n50))
print("{:d} nota(s) de R$ 20,00".format(n20))
print("{:d} nota(s) de R$ 10,00".format(n10))
print("{:d} nota(s) de R$ 5,00".format(n5))
print("{:d} nota(s) de R$ 2,00".format(n2))
print("{:d} nota(s) de R$ 1,00".format(n1))