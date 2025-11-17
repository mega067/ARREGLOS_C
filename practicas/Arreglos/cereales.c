#include <stdio.h>
int main(int argc, char const *argv[])
{   
    int arreglo[12] = {1, 5, 8, 9, 4, 7, 9, 8, 1, 6, 3, 2};
    int C ;
    int S = 0 ;
    int R = 0 ;
     
    for (C = 0; C < 12; C++)
    {
        printf ("%d\n",arreglo[C]);
        S = S + arreglo[C];
    }
    printf("SUMA\n");
    printf ("%d\n",S);
    
    R = S / 12 ;
    printf("a) Promedio anul en toneladas\n");
    printf("%d\n",R);
    
    return 0;
}
