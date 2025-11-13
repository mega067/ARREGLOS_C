#include <stdio.h>
#include <stdint.h>

int main(int argc, char const *argv[]){

int CON1, CON2;
    int RENGLONES = 5;
    char ND = ' ';

    for (CON1 = 1; CON1 <= RENGLONES; CON1++) {

        
        for (CON2 = RENGLONES - 1; CON2 >= CON1; CON2--) {
            printf("%c", ND);
        }

        
        for (CON2 = 1; CON2 <= CON1; CON2++) {
            printf("%d", CON2);
        }

        
        for (CON2 = CON1 - 1; CON2 >= 1; CON2--) {
            printf("%d", CON2);
        }

        
        printf("\n");
    }
    
    return 0;
}