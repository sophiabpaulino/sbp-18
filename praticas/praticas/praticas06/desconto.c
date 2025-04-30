#include <stdio.h>

int main () {
    float valor_bruto = 0.0;
    float valor_desconto = 0.0;

    printf("Digite o valor:");
    scanf("%f", &valor_bruto);

   
    if (valor_bruto <= 100.0f) {
        valor_desconto = 0.01f * valor_bruto;
        printf("O desconto foi de %.1f\n", valor_desconto);
    } else {
        if (valor_bruto <= 500.0f) {
            valor_desconto = 0.05f * valor_bruto;
            printf("O desconto foi de %.1f\n", valor_desconto);    
        }
    }

    return 0; 
}