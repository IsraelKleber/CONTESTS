#ifndef FUNCOES_H
#define FUNCOES_H

struct array_list *array_list_criar();

/*
Cria uma nova lista em memória através do struct. A função é feita com base na estrutura da struct, que contém um ponteiro, para solicitar alocação de memoria, e as variáveis de tamanho e capacidade para controle desse array. Essa função tem notação O(1).
*/

int array_list_buscar_por_indice(struct array_list *a, int index);

/*
Retorna um elemento localizado no índice index. Dentro da função é feita a verificação se o array_list possui elementos e se o index está dentro do tamanho do array, caso contrário é retornado  que o índice em questão é inválido. Sendo válido, é acessado o espaço de memória e retornando o conteúdo. Dessa forma, a função tem a notação O(1).
*/

void array_list_inserir_fim(struct array_list * a, int x);

/*
Adiciona um novo elemento ao final da lista. Essa função verificar se a capacidade suporta a quantidade de elementos que tem no array, senão é feito um novo array com a capacidade maior, depois realiza a cópia do array antigo para o array novo, libera o espaço de memória e depois inclui o novo elemento no array_list. Caso tenha capacidade suciente é feita a inclusão do elemento sem ter que aumentar a capacidade. Com a estrutra dessa função temos a complexidade de O(n).
*/ 

int array_list_remover_fim(struct array_list *a);

/*
Remove um elemento do final da lista, caso exista. Senão existir é informando -1, simbolizando que não foi feito a remoção, pois o array_list está zerado. A estrutura dessa função possui uma notação de O(1).
*/ 

unsigned int array_list_tamanho(struct array_list *list);
/*
Recebe a lista e retorna a quantidade de elementos na lista. Complexidade de O(1).
*/

int array_list_buscar_por_elemento(struct array_list *a, int elemento);

/*
Busca um elemento na lista. Retorna o índice onde ele se encontra ou −1 se ele não estiver na lista. Primeiro é feito uma verificação para identificar se o array não está vazio. O array estando com elementos é feito um for para percorrer os elementos e comparar com o elemento deseja. A partir do momento que encontrar a função finalizando informando o índice do elemento deseja.Dessa forma, a função possui uma complexidade de O(n). 
*/

void array_list_inserir_indice(struct array_list *a, int index, int x);

/*
Insere um novo elemento na lista, aumentando a quantidade de elementos. O elemento inserido
deve se localizar no índice index. A função consiste em verifica a capacidade e fazer alocação dinâmica, se necessário. Depois isso, é feito o deslocamento de todos os elemento em um espaço de memória até chegar no índice em questão e adicionar o elemento. Dessa forma, a função possui uma complexidade de O(1). 
*/

int array_list_remover_indice(struct array_list *a, int index);

/*
Remove elemento localizado no índice index. A estrutra dessa função começa verificando se o índice informado é vélido, se não retorna -1, se sim é feito o deslocamento do elemento de index+1, ou seja, o próximo elemento do lado do que será retirado da lista, e substitui o elemento que de index, depois é feitora um incremento do index para fazer o mesmo processo com os demais elementos até chegar no último, depois o ultimo espaço do tamanho é removido e a função retorna o ponteiro do array. Com isso, a função tem a complexidade de O(n).
*/

unsigned int array_list_capacidade(struct array_list *list);

/*
Retorna o espaço efetivamente reservado para a lista. Recebe a lista e retorna a capacidade total na lista. Complexidade de O(1).
*/

double array_list_ocupacao_porcetagem(struct array_list *a);

/*
Retorna o percentual do espaço reservado efetivamente ocupado por elementos da lista. O percentual é um valor entre 0, 0 e 1, 0. Para essa função foi feito o calculo da porcetagem = ((tamanho*100)/capacidade), dessa forma, é possível encontrar a qualidade exata de ocupação. Para deixar que o valor entre 0, 0 e 1, 0, a porcetagem foi divido por 100, com isso retorna o valor conforme desejado. necessário regular a quantidade de cadas decimais no momento de imprimir na tela. Complexidade O(1).
*/

void array_list_apaga_memoria(struct array_list *list);

/*
Libera memória usado pela lista list. Recebe a lista, liberado o conteúdo que está contida nela e depois liberar o espaço utilizado na memória. Complexidade O(1).
*/

void print_vector(struct array_list *a);

/*
Realizar a impressão ne tela do array_list. Recebe o array-list, seu tamanho e capacidade. Depois acessa os conteúdos e imprime na tela. Complexidade O(n).
*/

#endif