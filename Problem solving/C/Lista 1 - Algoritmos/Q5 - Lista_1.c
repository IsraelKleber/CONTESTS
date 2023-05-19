#include <stdio.h>

int main(){
    int tamanho_maior, X, tamanho_subvetor, soma = 0, soma_maior = 0, z = 0;
    scanf("%d %d", &tamanho_maior, &X);
    int vetor[tamanho_maior], subvetor[tamanho_maior];  
    int somas[5];

    for (int i = 0; i < 5; i++){                                                                    
        somas[i] = 0;
    }

    for (int i = 0; i < tamanho_maior; i++){
        scanf("%d", &vetor[i]);
        subvetor[i] = 0;
    }

    for (int i = 0; i < tamanho_maior; i++){                                                      
        if (vetor[i] < X - 3){                                                                    
            subvetor[i] = vetor[i];                                                               
            tamanho_subvetor++;                                                                   
        }                                                                                         
    }

    for (int i = 0; i < tamanho_maior; i++){                                                      
        if (vetor[i] < X - 3){                                                                    
            subvetor[z] = vetor[i];                                                               
            z++;                                                                                  
        }                                                                                         
    }   

    int for1 = tamanho_subvetor;

    for (int B = 0; B < for1; B++){                                                                 
        for (int J = B + 1; J < for1; J++){                                                      
            for (int K = J + 1; K < for1; K++){                                                  
                for (int L = K + 1; L < for1; L++){                                              
                    for (int M = L + 1; M < for1; M++){                                          
                        soma = subvetor[B] + subvetor[J] + subvetor[K] + subvetor[L] + subvetor[M]; 
                        if (soma <= X && soma > soma_maior){                                        
                            soma_maior = soma;                                                      
                            somas[0] = subvetor[B];                                                 
                            somas[1] = subvetor[J];                                                 
                            somas[2] = subvetor[K];                                                 
                            somas[3] = subvetor[L];                                                 
                            somas[4] = subvetor[M];                                                 
                        }                                              
                    }                     
                }
            }
        }                                                                                          
    }


    for (int i = 0; i < 5; i++){
        printf("%d ", somas[i]);
    }
    printf("\n");

    return 0; 
}