#include <stdio.h>
#include <stdint.h>

int main(int argc, char const *argv[])
{
    float A [10][20];
    float B [10][20];
    float C [10][20];


    int M = 0; //FILAS
    int N = 0; //COLUMNAS
        
    
    do {
        printf("ARREGLO A \n");
        printf("ingresa el valor de M (entre 1 y 10): \n");
        scanf("%d", &M);
    } while (M < 1 || M > 10);

    do {
        printf("ARREGLO A \n");
        printf("ingresa el valor de N (entre 1 y 20): \n");
        scanf("%d", &N);
    } while (N < 1 || N > 20);

    printf("----------------------------------- \n");
    printf("LLENADO DEL ARREGLO A \n");
    for(int i=0; i < M; i++){
        for(int j=0; j < N; j++){
            printf("ingresa el valor de A[%d][%d]: \n", i, j);
            scanf("%f", &A[i][j]);
        }
        
    }

    printf("----------------------------------- \n");
    printf("LLENADO DEL ARREGLO B \n");
    for(int i2=0; i2 < M; i2++){
        for(int j2=0; j2 < N; j2++){
            printf("ingresa el valor de B[%d][%d]: \n", i2, j2);
            scanf("%f", &B[i2][j2]);
        }
        
    }

    for(int i3=0; i3 < M; i3++){
        for(int j3=0; j3 < N; j3++){
            C[i3][j3] = A[i3][j3] + B[i3][j3];
        }
    }

    printf("----------------------------------- \n");
    printf("ARREGLO C (SUMA DE A + B) \n");
    for(int i4=0; i4 < N; i4++){
        for(int j4=0; j4 < M; j4++){   
            printf("A[%d][%d] + B[%d][%d] = %f \n", i4, j4, i4, j4, C[i4][j4]);
             printf("\n");
            }
        }
    printf("----------------------------------- \n");
    printf("ARREGLO RESULTANTE C \n");
   
    for(int i5=0; i5 < N; i5++){
        
        for(int j5=0; j5 < M; j5++){
            printf("|%f|",C[i5][j5]);
        }
    printf("\n");
    }





        
    


    

    return 0;
}
