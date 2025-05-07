#include <stdio.h>

int main () {
    
    int nota = 0; 

    do {
    } while (nota < 1 || nota > 10);
    scanf("%i", &nota);

    if (nota < 1 || nota > 10) {
        printf("Nota invalida, Tente novamente!");
    }


    return 0;
}