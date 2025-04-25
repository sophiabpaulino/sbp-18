#include <stdio.h>

int main () {
    int numero = 0; 

    printf("Digite um numero inteiro:");
    scanf("%i", &numero);

    int numero_eh_divisivel_por_2 = numero % 2 == 0;

    if (numero_eh_divisivel_por_2) {
        printf("O numero %i eh par!\n", numero);
    } else {
        printf("O numero %i eh impar!\n", numero);
    }

    int idade = 0; 

    printf("Digite sua idade:");
    scanf("%i", &idade);

    if (idade < 16) {
        printf("voce n pode votar!\n");
    } else { 
        if (idade < 16 || idade > 18) {
            printf("Voce pode votar!\n");
        } else {
        printf("Voce eh obrigado a votar!\n"); 
      }    
        return 0;   
    }
}

   
