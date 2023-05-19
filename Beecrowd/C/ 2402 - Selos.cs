#include <stdio.h>

int primo(long long j){
        long long i;
        
        if (j % 2 == 0){
            return 0;
        }
        for ( i = 3; i * i < j + 1; i += 2){
            if (j % i == 0)
                return 0;
        }
        return 1;
}

int main(){
    long long numeros;
    scanf("%lld", &numeros);
    if (primo(numeros))
        printf("N\n");
    else
        printf("S\n");
    return 0;
}