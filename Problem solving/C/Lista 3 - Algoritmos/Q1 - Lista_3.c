#include <stdio.h>

int somaIgualS(int array_a[], int tamanho_array, int s){
    int resp = 0;
    for (int i = 0; i < tamanho_array; ++i){
        for(int j = i + 1; j < tamanho_array; ++j){
            if (array_a[i] + array_a[j]==s){
                printf("%d + %d = %d\n", array_a[i], array_a[j], s);
                ++resp;
                break;
            }
        }
    }
    return resp;
}

int main(){
    int tamanho_array, s, resp = 0;
    scanf("%d %d", &tamanho_array, &s);
    int array_a[tamanho_array];

    for (int i = 0; i < tamanho_array; i++){
        scanf("%d", &array_a[i]);
    }

    resp = somaIgualS(array_a, tamanho_array, s);

    if (resp == 0){
        printf("Não\n");
    }
    return 0;
}