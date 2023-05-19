i = int(input())                                     
a = i//365                                           
resa = i%365                                         
m = resa//30                                         
resm = resa%30                                       
d = resm//1                                          
print("{:d} ano(s)".format(a))                       
print("{:d} mes(es)".format(m))                      
print("{:d} dia(s)".format(d)) 