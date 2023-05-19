#include <stdio.h>

int maior_soma(int array_a[], int tamanho_array){
    int maior = array_a[0], soma = 0;   
    //a variável maior foi criada para armazenar o maior valor conforme as verificações.
    //a variável soma foi criada para armazenar a soma de mais de um elemento e depois comparar se é o maior. 
    for (int i = 1; i < tamanho_array; i++){
        if (array_a[i] > maior)
        maior = array_a[i];
    }
    for (int j = 0; j < tamanho_array; j++){ 
        //a variável J foi criada para deteminar o ponto inicial de uma sub-lista.
        for (int k = j + 1; k < tamanho_array; k++){
            //a variável k foi criada para deteminar o ponto final de uma sub-lista.
            soma = 0;
            for(int l = j; l < k + 1; l++){
                //a variável l foi criada para percorrer as sub-lista.
                soma = soma + array_a[l];
            }
            if(soma > maior){
                maior = soma;
            }
        }
    }
    return maior;
}

int main(){
    int tamanho_array; 
    // variável criada para declarar o tamanho do array   
    scanf("%d", &tamanho_array);
    int array_a[tamanho_array]; 
    // array criado para armazenar os elementos   

    // todas as variáveis foram declaradas com o tipo inteiro, pois a questão 
    //informa que os valores será até 10^5, tamanho suportado pelo tipo int. 
    
    for (int i = 0; i < tamanho_array; i++){
        scanf("%d", &array_a[i]);
    }

    printf("%d\n", maior_soma(array_a, tamanho_array));
    return 0;
}