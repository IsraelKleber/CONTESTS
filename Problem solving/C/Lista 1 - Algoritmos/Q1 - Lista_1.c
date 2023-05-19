#include <stdio.h>
int main( ){
    long long a, b, i;  
    scanf("%lld", &a);             
    scanf("%lld", &b);             
    long long soma = a;            
    for (i = 1; i < b; i++){       
        soma = soma * a;           
    }
    printf("A^B = %lld\n", soma);  
    return 0;
}                                  