#include <stdio.h>
#include <stdlib.h>
#include "ll_int.h"



int array_list_ocupacao_porcetagem(struct array_list *a){
    if (index > a->size){
        return -1;
    }

    while (a->size != index){
        a->solic_memoria[index]= a->solic_memoria[index+1];
        index++;
    }
    a->size = a->size-1;
    return a->size;
}