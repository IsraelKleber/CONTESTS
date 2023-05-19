#include <stdio.h>
#include <stdlib.h>
#include "ll_int.h"

int main(){
    struct ll_int *l01 = ll_int_criar();

    for (int i = 1; i < 11; ++i){
        ll_int_inserir_inicio(l01, i*2);
    }
    print_list(l01);

    ll_int_inserir_indice(l01, 3, 10);
    print_list(l01);


    return 0;
}