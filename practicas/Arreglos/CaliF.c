#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int N ;
    int Arre [1000];
    int Pro;
    int A_pro = 0;
    float P_A = 0;
    float P_Na = 0;
    int No_pro = 0;
    int i;
    int C;
    int S;
    int M_8 =  0;
    S = 0;
    printf("Define el valor de N (1 - 1000): \n");
    scanf("%d",&N);

for (i=1; i <= N; i++)
{
    printf("Escribe la calificacion final del alumno N°%d:\n",i);
    scanf("%d",&C);

    Arre[i-1] = C; 
    S = S + C;
    if ( C >= 6)
    {
        if (C>=8){
            M_8++;
        }
        A_pro = A_pro + 1; 
    }
    else{
        No_pro = No_pro + 1;
    }
    
}
///////////\\\\PROMEDIO/////\\\\\\\\\\

Pro = S / N ;
printf("\nPromedio general del grupo:  %d\n",Pro);

///////////\\\\Apro y N apro/////\\\\\\\\\\

printf("\nNumero de alumnos Aprobados: %d\n",A_pro);
printf("\nNumero de alumnos No aprobados: %d\n",No_pro);
printf("\nNumero de alumnos con calificaciones mayor a 8: %d\n",M_8);

P_A = ((float)A_pro / N)*100;
P_Na = ((float)No_pro / N)*100;

printf("\nPorcentaje de alumnos aprobados: %f%%\n",P_A); 
printf("\nPorcentaje de alumnos No aprobados: %f%%\n",P_Na); 

    return 0;
}
