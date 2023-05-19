#include <stdio.h>
int main( ){
    long long tempo = 0, periodo_tempo;              
    double massa;
    scanf("%lf", &massa);                            
    scanf("%lld", &periodo_tempo);                   
    while (massa > 1){                                
        massa = massa/2;                             
        tempo = tempo + periodo_tempo;               
    }                                               
    printf("O tempo é de %lld segundos\n", tempo);   
    return 0;                                        
}  