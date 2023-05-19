#ifndef ll_INT_
#define ll_INT_

struct ll_node_int{
    int valor;
    struct ll_node_int *anterior, *proximo;
};

struct ll_int{
    struct ll_node_int *primeiro;
    struct ll_node_int *ultimo;
    unsigned int tamanho;
};

struct ll_int *ll_int_criar();

/*
Cria uma nova lista ligada em memória. Essa nova lista solicita um espaço de memória para o nó, informa que os ponteiros da lista ligada primeiro e ultimo apontam para o vazio e o tamanho é zero.  Retorna um ponteiro para a lista recém criada. Complexidade O(1).
*/

int ll_int_buscar_indice(struct ll_int *lista, int index);

/*
Retorna um elemento localizado no índice index. Primeiro a função verifica se o índice é válido, se não for válido apresenta erro, se for válido, um novo nó é criado e esse nó aponta para o ínicio da lista. Após criado o novo nó, é feito um for para percorrer do primeiro elemento até chegar no espaço de memória equivalente o número do índice e, por fim, retorna o valor que está no espaço de memória equivalente ao índice. Complexidade O(n).  
*/

void ll_int_inserir_fim(struct ll_int *list, int x);

/*
É criado o novo nó para armazenar o conteúdo do parâmetro. Esse novo nó aponta para o próximo que é o vazio, e aponta para o anterior (antigo último). o antigo último para de apontar para o vazio e passa a apontar para o novo nó que é o novo último nó. Com isso, é feito um incremento no tamanho sinalizando a inclusão do novo nó. Após isso, é realizado a verificação se a lista estava vazia, se sim, o primeiro espaço da lista recebe o novo nó. Se não, o próximo espaço após o último nó recebe a novo nó e esse passa ser o último nó. Complexidade O(1).
*/


int ll_int_remover_fim(struct ll_int *list);

/*
Remove um elemento do final da lista, caso exista. Nessa função, verifica se a lista está vazia, se sim retorna -1, se não, é criada uma variável que o guarda o valor do último nó. Após isso, é feita a verificação do o primeiro é igual ao último, se sim, isso quer dizer que só a um nó na lista, com isso, é criado um novo nó que a aponta para o espaço de memória existete e depois é feita a liberação da memória através desse ponteiro. Por fim, o primeiro e o último passa a apontar para o vazio e o tamanho é zerado. Se a lista tiver mais de um nó, O peúltimo começa a apontar para o vazio, o espaço de memória do último elemento é liberado, o peúltimo passa a ser o úlitmo e o tamanho é diminuido em um. Complixidade O(1).
*/

unsigned int ll_int_tamanho(struct ll_int *list);

/*
Um variável é criada para servir de contador. Depois é criado um nó que apontá para o início da lista. Esse novo nó é incluído em um laço que para percorrer a lista, recebendo sempre o próximo espaço de memória. Cada vez que passar de um espaço de memória para outro é feito um incremento na variável que foi criada e, por fim, é feito o retorno dessa variável com o tamanho total. Complexidade O(n).
*/
int ll_int_buscar_elemento(struct ll_int *list, int x);

/*
É feito um nó que começa no primeiro elemento. Também é criada uma variável que armazena -1. Com isso, é feito um laço para percorrer os nós e verificar se o conteúdo de cada nó é equivalente ao  elemento passado pelo parâmetro. Quando encontra, o índice equivalente é atribuido a variável que armazenava -1 e a função termina retornando essa essa variável com o índice. Complexidade O(n).
*/

void ll_int_inserir_indice(struct ll_int *list, int x, int index);

/*
Dois nós são criados. Um que que recebe o elemento passado pelo parâmetro e o outro que aponta para o início da lista. Após isso, é criado um nó para percorrer do início da lista até o número do índice, recebendo sempre o nó seguinte, ou seja, quando chear no índice em questão esse ponteiro está apontando para o espaço de memória que será acrescentado o nó com o conteúdo. Após isso, é realizada a verificação se o índice é diferente de zero, se sim, é o novo só para a ser o primeiro e apontar para o vazio, se não o nó utilizado para percorrer, que também aponta para um nó já lista antes do índice que será acrescentado o novo nó, passa a apontar para o novo nó, e o anterior ao novo nó é o anterior de onde será inserido. Por fim, é feito um acrescimo no tamanho. Complexidade O(1).
*/

int ll_int_remover_indice(struct ll_int *list, int index);

/*
E criada uma variável que armazena -1. É realizada um verificação se o tamanho da lista é zero, se sim é retonado a variável que tem -1 armazenado. Se não, é realizada uma verificação se o índice está dentro do tamanho da lista. Estando dentro do tamanho da lista um novo nó é criado e é utilizado para percorrer do início da lista até o índice que deseja remore, atribuindo  o nó do índice, e guarda o conteúdo na variável que qarmazenava -1. Se o tamanho for igual a um o laço que percorreu o laço, que por sua vez aponta para o láço do índice, é liberado e o nó passa a apontar para o vazio. Para os demais elementos é removido o nó e liberado espaço, o nó anterior ao que foi removido passa a apontar para o próximo nó após o removido e este passa a apontar ao anteriro ao que foi removido. Por fim, o tamanho é diminuído em um. Complexidade O(n).
*/

void ll_int_apaga_memoria(struct ll_int *list);
/*
Libera a memória usado pela lista list. Recebe a lista, liberado o conteúdo que está contida no nó e pra onde o nó aponta e depois liberar o espaço utilizado na memória. Complexidade O(1).
*/

void ll_int_inserir_inicio(struct ll_int *list, int x);

/*
Recebe um nó e insere no início da lista, apontando para o segundo nó, que antes era o primeiro, e esse para de apontar para o vazio e passa para a apontar esse novo nó do ínicio.  Complexidade O(1).
*/

int ll_int_remover_inicio(struct ll_int *list);

/*
Verificar se a lista é zero, se sim, retorna -1, se não, verifica se o tamanho é 1, se sim  é criado uma variável que guarda o valor do único nó. Cria um novo nó que aponta para o nó em questão, depois libera o espaçoe diminuio tamanho e a lista passsa a ser vazia. Complexidade O(1).
*/

void print_list(struct ll_int *list);

/*
Realizar a impressão ne tela do array_list. Cria um novo nó que aponta para o início da lista e percorrer através do laço mostrando o conteúdo de nó. Complexidade O(n).
*/

#endif