#include <stdio.h>

int MDC(int a, int b){
    if (b == 0){
        return a;
    }
    return MDC(b, a%b);
}

int main( ){

    long long a, b, c, d, i;
    scanf("%lld", &d);
    for (i=0; i < d; i++){
        scanf("%lld", &a);
        scanf("%lld", &b);
        c = MDC(a, b);
        printf("%lld\n", c);
    }
    return 0;
}