#include <stdio.h>
int main( ){
    long long populacao, infectados = 1, dias = 0; 
    scanf("%lld", &populacao);                      
    while (infectados < populacao){                 
        infectados *= 2;                            
        dias += 1;                                  
    }                                               
    printf("Quantidade de dias:  %lld\n", dias);    
    return 0;
}                                                   