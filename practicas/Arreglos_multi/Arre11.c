#include <stdio.h>
#include <stdint.h>

int main(int argc, char const *argv[])
{
    float A [10][20];
    float B [10][20];
    float c;

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



        
    


    

    return 0;
}
