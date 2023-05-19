#include <stdio.h>
#include <stdlib.h>
#include "ll_int.h"

struct ll_int *ll_int_criar(){ 
    struct ll_int *nova_lista=(struct ll_int*)malloc(sizeof(struct ll_int));
    nova_lista->primeiro=0;
    nova_lista->ultimo=0;
    nova_lista->tamanho=0;
    return nova_lista;
}

/*
Cria uma nova lista ligada em memória. Retorna um ponteiro para a lista recém criada.
*/

int ll_int_buscar_indice(struct ll_int *lista, int index){
    if (index >= 0 && index < lista -> tamanho){ //Se é um índice válido.
        struct ll_node_int *atual = lista -> primeiro; //Crio um nó que começa no primeiro elemento.
        for (int i = 0; i < index; i++){ //Percorro até o índice que quero.
            atual = atual -> proximo; //Avanço na lista.
        }
        return atual -> valor; //Retorno o valor no índice informado.
    }   
}

/*
Retorna um elemento localizado no índice index.
*/

void ll_int_inserir_fim(struct ll_int *list, int x){
    struct ll_node_int *novo_noh;
    novo_noh = (struct ll_node_int*)malloc(sizeof(struct ll_node_int));
    novo_noh->valor = x;
    novo_noh->proximo = 0;
    novo_noh->anterior = list->ultimo;
    list->ultimo = novo_noh;
    list->tamanho++;

    if (novo_noh->anterior == 0){ // lista vazia
        list->primeiro = novo_noh;
    }
    else{
        novo_noh->anterior->proximo = novo_noh;
    }
}

/*
Adiciona um novo elemento ao final da lista.
*/

int ll_int_remover_fim(struct ll_int *list){
    if (list->primeiro == 0){
        return -1;
    }    
    int r = list->ultimo->valor;

    if (list->primeiro == list->ultimo){
        int r = list->ultimo->valor;
        struct ll_node_int *antigo = list->ultimo;
        free(antigo); 
        list->primeiro = 0;
        list->ultimo = 0;
        list->tamanho = 0;
        return r;
    }    

    list->ultimo->anterior->proximo = 0;
    free(list->ultimo);
    list->ultimo = list->ultimo->anterior;
    list->tamanho--;
    return r;
}

/*
Remove um elemento do final da lista, caso exista. O final da lista é o índice tamanho-1.
*/

unsigned int ll_int_tamanho(struct ll_int *list){
    unsigned int s=0;
    struct ll_node_int *atual = list->primeiro;
    while(atual != 0){
        s++;
        atual = atual->proximo;
    }
    return s;
}
/*
Retorna a quantidade de elementos na lista.
*/

int ll_int_buscar_elemento(struct ll_int *list, int x){
    struct ll_node_int *atual = list -> primeiro; //Crio um nó que começa no primeiro elemento.
    int resposta = -1;
    for (int i = 0; i < list -> tamanho; i++){
        if (atual -> valor == x){
            resposta = i;
            break;
        }
        atual = atual -> proximo;
    }
    return resposta;
}
/*
Busca um elemento na lista. Retorna o índice onde ele se encontra ou −1 se ele não estiver na lista.
*/

void ll_int_inserir_indice(struct ll_int *list, int x, int index){
    if (index >= 0 && index < list -> tamanho){ 
        struct ll_node_int *novo_noh = (struct ll_node_int*)malloc(sizeof(struct ll_node_int)); //Cria um novo nó
        struct ll_node_int *atual = list -> primeiro; //Nó que representa o primeiro elemento
        for (int i = 0; i < index; i++){
            atual = atual -> proximo; //Indo até onde quero inserir
        }

        novo_noh -> valor = x; //Atribuo o valor ao novo nó.
        if (index != 0){ //Se quero inserir em qualquer posição sem ser a primeira.
            atual -> anterior -> proximo = novo_noh; //O próximo ao anterior onde quero inserir, aponta para o novo nó.
            novo_noh -> anterior = atual -> anterior; //O anterior ao novo nó é o anterior de onde eu quero inserir.
        }

        else{ //Se quero inserir na primeira posição
            list -> primeiro = novo_noh; //O primeiro agora é o novo nó criado.
            novo_noh -> anterior = 0; //Se o índice de inserção é zero, o novo nó não possuirá anterior.
        }
        
        novo_noh -> proximo = atual; //O próximo ao novo nó será o número que estava onde eu quero inserir.
        atual -> anterior = novo_noh; //O anterior de onde eu quero inserir é o novo nó.
        list -> tamanho++; //Tamanho da lista incrementado.
    }       
}
/*
Insere um novo elemento na lista, aumentando a quantidade de elementos. O elemento inserido deve se localizar no índice index.
*/

int ll_int_remover_indice(struct ll_int *list, int index){
    int resposta = -1;
    if (list -> tamanho == 0){
        return resposta;
    }

    if (index >= 0 && index < list -> tamanho){
        struct ll_node_int *atual = list -> primeiro; //Nó que representa o primeiro elemento
        for (int i = 0; i < index; i++){
            atual = atual -> proximo;
        }
        resposta = atual -> valor; //Armazeno o valor do elemento a remover.

        if (list -> tamanho == 1){
            free(atual);
            list -> primeiro = 0;
            list -> ultimo = 0;
        }

        else{
            if (index == 0){ //Se quero remover o primeiro elemento
                list -> primeiro = atual -> proximo; //O primeiro da lista passa a ser o segundo elemento.
                atual -> proximo -> anterior = 0; //O novo primeiro elemento não possui anterior.
                free(atual); //Libero a memória do elemento removido.
            }
            else if (index == list -> tamanho - 1){ //Se quero remover o último elemento
                atual -> anterior -> proximo = 0;
                list -> ultimo = 0;
                free(atual);
            }
            else{
                atual -> anterior -> proximo = atual -> proximo;
                atual -> proximo -> anterior = atual -> anterior;
                free(atual);
            }
        }
        list -> tamanho--;
    }
    return resposta;
}

/*
Remove elemento localizado no índice index.
*/
void ll_int_apaga_memoria(struct ll_int *list){
    free(list->primeiro->anterior);
    free(list->primeiro->proximo);
    free(list->primeiro);
    free(list->ultimo->anterior);
    free(list->ultimo->proximo);
    free(list->tamanho);
    free(list->ultimo);
    free(list);
}
/*
Libera memória usado pela lista list.
*/
void ll_int_inserir_inicio(struct ll_int *list, int x){
    struct ll_node_int *novo_noh = (struct ll_node_int*)malloc(sizeof(struct ll_node_int));
    novo_noh->valor = x;
    novo_noh->proximo = list->primeiro;
    novo_noh->anterior = 0;
    list->primeiro = novo_noh;
    list->tamanho++;

    if (novo_noh->proximo == 0)
      list->ultimo = novo_noh;
    else{
    novo_noh->proximo->anterior = novo_noh;
    }
}
/*
Insere um novo nó no início do array. 
*/
int ll_int_remover_inicio(struct ll_int *list){
    if (list->primeiro == 0){
        return -1;
    }

    else if (list->tamanho == 1){
        int r = list->primeiro->valor;
        struct ll_node_int *antigo = list->ultimo;
        free(antigo); 
        list->primeiro = 0;
        list->ultimo = 0;
        list->tamanho--;
        return r;
    }

    int r = list->primeiro->valor;
    struct ll_node_int *old_node = list->primeiro;
    list->primeiro = list->primeiro->proximo;
    free(old_node);
    return r;
}



void print_list(struct ll_int *list){
    struct ll_node_int *atual = list->primeiro;
    printf("Lista: ");

    while(atual != 0){
        printf("%d -> ", atual->valor);
        atual = atual->proximo;
    }
    printf("NULL\n");
}
