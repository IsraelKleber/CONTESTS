x = int(input())                                     
h = x//3600                                          
m = (x%3600)//60                                     
s = (x%3600)%60                                      
print(h,m,s,sep=":") 