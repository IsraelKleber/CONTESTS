#include <stdio.h>

int trianguloR(int array_a[], int tamanho_array){
    int triangulo = 0;
    for (int i = 0; i < tamanho_array; ++i){
        for(int j = i + 1; j < tamanho_array; ++j){
            for (int k = j + 1; k < tamanho_array; ++k){
                if(array_a[i]*array_a[i] == array_a[j]*array_a[j] + array_a[k]*array_a[k] ||
                    array_a[j]*array_a[j] == array_a[k]*array_a[k] + array_a[i]*array_a[i] ||
                    array_a[k]*array_a[k] == array_a[i]*array_a[i] + array_a[j]*array_a[j]){
                        triangulo++;
                        return triangulo;
                }
            }
        }
    }
    return triangulo;
}
int main(){
    int tamanho_array;
    scanf("%d", &tamanho_array);
    int array_a[tamanho_array];

    for (int i = 0; i < tamanho_array; i++){
        scanf("%d", &array_a[i]);
    }

    if (trianguloR(array_a, tamanho_array) == 0){
        printf("Não há elementos no array que forme um triângulo\n");
    }
    else{
        printf("Há elementos possíveis no array de forma um triângulo\n");
    }
    return 0;
}
