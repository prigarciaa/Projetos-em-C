#include <stdio.h>

int main() {

    int i, j;
    char letra;

    for (i = 1; i <= 5; i++){ //loop externo

        letra = 'A';
        for(j = 1; j <= i; j++){ // loop interno

            printf("%c" , letra);
            ++letra;

        }

        printf("\n");
    }
    






    return 0;
}