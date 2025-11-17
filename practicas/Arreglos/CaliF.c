#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int N ;
    int Arre [1000];
    int Pro;
    int i;
    int C;
    int S;
    S = 0;
    printf("Define el valor de N (1 - 1000): \n");
    scanf("%d",&N);

for (i=1; i <= N; i++)
{
    printf("Escribe la calificacion final del alumno N°%d:\n",i);
    scanf("%d",&C);

    Arre[i-1] = C; 
    S = S + C;
}
///////////\\\\PROMEDIO/////\\\\\\\\\\

Pro = S / N ;
printf("\nPromedio general del grupo:  %d\n",Pro);



    return 0;
}
