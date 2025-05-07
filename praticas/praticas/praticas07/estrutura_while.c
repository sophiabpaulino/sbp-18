#include <stdio.h>

int main () {

    int nota = 0; 
    scanf("%i", &nota);

    while(nota < 1 || nota > 10) {
        printf("Nota invalida, Tente novamente!\n");
        scanf("%i", &nota);
    }

    return 0;
}