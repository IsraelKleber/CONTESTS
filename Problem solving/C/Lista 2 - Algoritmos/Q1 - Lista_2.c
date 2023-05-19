#include <stdio.h>

long long MMC(long long n1, long long n2){
    long long maior = n1, i;
    if (n2 > maior){
        maior = n2;
    }
    for (i = maior; i < n1 * n2; i++){
        if (i % n1 == 0 && i % n2 == 0){
            return i;
        }
    }
    return n1 * n2;
}

int main(){
    long long n1, n2;
    scanf("%lld %lld", &n1, &n2);
    printf("O MMC é: %lld\n", MMC(n1,n2));
    return 0;
}