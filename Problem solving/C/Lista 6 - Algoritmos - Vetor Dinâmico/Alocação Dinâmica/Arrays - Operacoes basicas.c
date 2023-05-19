#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funcoes.h"

int main(){
    clock_t inicio, fim;
    struct array_list *a1 = array_list_criar();



    inicio = clock();
    for (int i = 0; i < 1600000; ++i){
        array_list_inserir_fim(a1, i);
    }
    fim = clock();
    double tempo = (fim - inicio)/(CLOCKS_PER_SEC/1.0);
    printf("Tempo decorrido de inserção: %.3lfs\n", tempo);

    return 0;
}