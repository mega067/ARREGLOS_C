#include <stdio.h>
#include <stdint.h>

int main(int argc, char const *argv[])
{
    int CON1;
    int CON2;
    int RENGLONES;

    char STR = '*';
    RENGLONES = 5;
  
    for (CON1=1; CON1 <= RENGLONES; CON1++)
    {
     for (CON2=1; CON2 <= CON1; CON2++)
     {
        printf("%C",STR);
     }
       printf("\n");
       
    }
      return 0;
}
