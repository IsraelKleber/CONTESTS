n = float(input())+0.00001                                   
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
print("NOTAS:")                                      
print("{:.0f} nota(s) de R$ 100.00".format(n100))    
print("{:.0f} nota(s) de R$ 50.00".format(n50))      
print("{:.0f} nota(s) de R$ 20.00".format(n20))      
print("{:.0f} nota(s) de R$ 10.00".format(n10))      
print("{:.0f} nota(s) de R$ 5.00".format(n5))        
print("{:.0f} nota(s) de R$ 2.00".format(n2))        
m1 = res2//1                                         
resm1 = res2%1                                       
m50 = resm1//0.50                                    
resm50 = resm1%0.50                                  
m25 = resm50//0.25                                   
resm25 = resm50%0.25                                 
m10 = resm25//0.10                                   
resm10 = resm25%0.10                                 
m5 = resm10//0.05                                    
resm5 = resm10%0.05                                  
m01 = resm5//0.01                                    
resm01 = resm5%0.01                                  
                                                     
print("MOEDAS:")                                     
print("{:.0f} moeda(s) de R$ 1.00".format(m1))       
print("{:.0f} moeda(s) de R$ 0.50".format(m50))      
print("{:.0f} moeda(s) de R$ 0.25".format(m25))      
print("{:.0f} moeda(s) de R$ 0.10".format(m10))      
print("{:.0f} moeda(s) de R$ 0.05".format(m5))       
print("{:.0f} moeda(s) de R$ 0.01".format(m01))  