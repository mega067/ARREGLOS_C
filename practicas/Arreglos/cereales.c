#include <stdio.h>
int main(int argc, char const *argv[])
{   
    int arreglo[12] = {1, 5, 8, 9, 4, 7, 9, 8, 1, 6, 3, 2};
    int C ;
    int C2 ;
    int S = 0 ;
    int P = 0 ;
    int P_S = 0;
    int P_i = 0;
    int P_N = 0;
    
     
    for (C = 0; C < 12; C++)
    {
        printf ("%d\n",arreglo[C]);
        S = S + arreglo[C];
    }
    printf("SUMA\n");
    printf ("%d\n",S);
    
    P = S / 12 ;
    printf("a) Promedio anul en toneladas\n");
    printf("%d\n",P);
    ///////////////////////////////////////////////////////
    for (C2 = 0; C2 < 12; C2++)
    {
        if(arreglo[C2]>P)
        {
            P_S = P_S + 1;    
        }
        if (arreglo[C2]<P)
        {
            P_i = P_i + 1;
        }
        else
        {
            P_N = P_N + 1; 
        }
        
    }

    printf("\nb) ¿Cuántos meses tuvieron una cosecha superior al promedio anual?\n");
    printf("%d\n",P_S);

    printf("\nc) ¿Cuántos meses tuvieron una cosecha inferior al promedio anual?\n");
    printf("%d\n",P_i);
    
    printf("\nc) ¿Cuántos meses tuvieron una cosecha igual el promedio anual?\n");
    printf("%d\n",P_N);



    return 0;
}
