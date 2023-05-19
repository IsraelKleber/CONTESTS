#include <stdio.h>
int main( ){
    int tamanho_array;

    scanf("%d", &tamanho_array);                                     
    int array_a[tamanho_array], contador_array[tamanho_array];
    int segundo_for = tamanho_array;
    long long substituicao = 2147483649;

    // elementos dos array definidos
    for ( int i = 0; i < tamanho_array; i++){                                              
        scanf("%d", &array_a[i]);                                                          
        contador_array[i] = 0;                                                             
    }                                                                                      
    // verificando os números repetidos
    for (int n_verificado = 0; n_verificado < tamanho_array; n_verificado++){              
        for (int px_numero = n_verificado; px_numero < segundo_for - 1; px_numero++){      
            if (array_a[n_verificado] == array_a[px_numero + 1]){                          
                contador_array[n_verificado]++;                                           
                substituicao++;                                                          
                array_a[px_numero + 1]  =  substituicao;                                  
            }                                                                             
        }                                                                                
    }
    // imprimindo os números repetidos
    for ( int i = 0; i < tamanho_array; i++){                                             
        if (contador_array[i] > 0){                                                       
        printf ("O número %d aparece %d vezes\n", array_a[i], contador_array[i]+1);        
        }                                                                                
    }                                                                                      
    return 0;
}  

