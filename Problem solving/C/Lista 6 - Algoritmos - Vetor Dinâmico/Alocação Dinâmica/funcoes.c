#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

struct array_list{
    int *solic_memoria;
    unsigned int size, capacity;
};

struct array_list *array_list_criar(){
    struct array_list * a1 = (struct array_list *)malloc(sizeof(struct array_list));
    a1->solic_memoria = (int*)malloc(sizeof(int)*10000);
    a1->size = 0;
    a1->capacity = 10000;
    return a1;
}
/*
Cria uma nova lista em memória. Retorna um ponteiro para a lista recém criada.
*/

int array_list_buscar_por_indice(struct array_list *a, int index){
    if (a == 0 ||  index >= a->size){
        return -1;
    }
    else{
        return a->solic_memoria[index];
    }
}      //não utilizei erro 

/*
Retorna um elemento localizado no índice index.
*/

void array_list_inserir_fim(struct array_list *a, int x){
    if (a->size == a->capacity){
        //a->capacity = a->capacity+10;
        a->capacity = a->capacity+10000;
        //a->capacity = a->capacity*2;
        int *novo = (int*)malloc(sizeof(int) * (a->capacity));
        int *antigo = a->solic_memoria;
        for (int i = 0; i < a->size; ++i){
            *(novo + i) /* novo[i]*/ = *(antigo+i);
        }
        a->solic_memoria = novo;
        free(antigo);
    }
    a->solic_memoria[a->size++]=x; 
    // pegar o endereço e soma com o tamanho e o endereço dessa soma inclua x 
}

/*
Adiciona um novo elemento ao final da lista. 
*/

int array_list_remover_fim(struct array_list *a){
    int r = -1;
    if(a->size > 0){
        a->size--; //para remover o último elemento 
        r = a->size;
    }
    return r;
}  

/*
Remove um elemento do final da lista, caso exista. */

unsigned int array_list_tamanho(struct array_list *list){
    return list->size;
}

/*
Retorna a quantidade de elementos na lista.
*/

int array_list_buscar_por_elemento(struct array_list *a, int x){
    int index = -1;
    if (a == 0){
        return -1;
    }
    else{
        for (int i = 0; i < a->size ; ++i){
            if (a->solic_memoria[i] == x){
                index = i;
                break; // para retornar o primeiro elemento se estiver repetido
            }
        }
    }
    return index;
}

/*
Busca um elemento na lista. Retorna o índice onde ele se encontra ou −1 se ele não estiver na lista.
*/

void array_list_inserir_indice(struct array_list *a, int index, int x){
    if (a->size+1 == a->capacity){
        //a->capacity = a->capacity+10;
        //a->capacity = a->capacity+10000;
        a->capacity = a->capacity*2;
        int *novo = (int*)malloc(sizeof(int) * (a->capacity));
        int *antigo = a->solic_memoria;
        for (int i = 0; i < a->size; ++i){
            *(novo + i) /* novo[i]*/ = *(antigo+i);
        }
        a->solic_memoria = novo;
        free(antigo);
    }

    if(index >= 0 && index <= a->size){
        a->size = a->size+1;
    }
    int cont = array_list_tamanho(a);
    while (a->size != index){
        a->solic_memoria[a->size]= a->solic_memoria[a->size-1];
        a->size--;
    }
    a->solic_memoria[index]=x; 
    a->size = cont;
}
/*
Insere um novo elemento na lista, aumentando a quantidade de elementos. O elemento inserido
deve se localizar no índice index.
*/

int array_list_remover_indice(struct array_list *a, int index){
    if (index > a->size){
        return -1;
    }

    while (a->size != index){  //tamanho - indez = 
        a->solic_memoria[index] = a->solic_memoria[index+1];
        index++;
    }
    a->size = a->size-1;
    return a->size;
}

/*
Remove elemento localizado no índice index.
*/

unsigned int array_list_capacidade(struct array_list *list){
    return list->capacity;
}

/*
Retorna o espaço efetivamente reservado para a lista.
*/

double array_list_ocupacao_porcetagem(struct array_list *a){
    double porcentagem = (a->size*100)/a->capacity;
    return porcentagem/100;
}

/*
Retorna o percentual do espaço reservado efetivamente ocupado por elementos da lista. O percentual é um valor entre 0, 0 e 1, 0.
*/

void array_list_apaga_memoria(struct array_list *list){ 
    free(list->solic_memoria);
    free(list);
}
/*
Libera memória usado pela lista list.
*/


void print_vector(struct array_list *a1){
    int i;
    printf(" (%u %u) { ", array_list_tamanho(a1), array_list_capacidade(a1));
    for ( i = 0; i < array_list_tamanho(a1); ++i)
        printf("%d ", a1->solic_memoria[i]);
    printf("}\n");
}

/*
Realizar a impressão ne tela do array_list.
*/

