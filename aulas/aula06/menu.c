#include <stdio.h> 

int main () {
    int opcao = 0;

    printf("MENU PRINCIPAL\n");
    printf("1 - Consultar saldo.\n");
    printf("2 - Recarregar saldo\n");
    printf("3 - Ver recados\n");
    printf("4 - Ver ligacoes\n");
    printf("5 - Sair\n");

    printf("Escolha uma opcao => ");
    scanf("%i", &opcao);

    // if (opcao == 1) {
    //     printf("Seu saldo eh de R$10.00\n");
    // } else if (opcao == 2) {
    //     printf("Digite 1 para R$10.00, 2 para R$20.00 ou 5 para R$ 50.00\n");
    // } else if (opcao == 3) {
    //     printf("Voce n tem recados\n");
    // } else if (opcao == 4) {
    //     printf("Ultimo numero foi 9898-5757\n");
    // } else if (opcao == 5) {
    //     printf("Ate logo\n");
    // } else {
    //     printf("Opcao invalida! Tente novamente\n");
    // }

    switch (opcao) {
        case 1: printf("Seu saldo eh de R$10.00\n"); break;
        case 2: printf("Digite 1 para R$10.00, 2 para R$20.00 ou 5 para R$ 50.00\n"); break;
        case 3: printf("Voce n tem recados\n"); break;
        case 4: printf("Ultimo numero foi 9898-5757\n"); break;
        case 5: printf("Ate logo\n"); break;
        default:printf("Opcao invalida! Tente novamente\n");
    }

    return 0;
}