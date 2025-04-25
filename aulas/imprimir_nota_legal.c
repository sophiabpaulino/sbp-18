#include <stdio.h>

int main () {
    printf ("--------------------\n");
    printf (" N O T A   L E G A L\n");
    printf ("--------------------\n");
    printf ("Item              Qtde     Preco      Valor\n");
    printf ("%-18s %03i %9.2f %9.2f\n", "Bolsa da Farm", 2, 100.00, 200.00);
    printf ("%-18s %03i %9.2f %9.2f\n", "Colar", 5, 50.00, 250.00);
    printf ("%-18s %03i %9.2f %9.2f\n","Blusa da Farm", 1, 169.00, 169.00);
    printf ("--------------------------------------------\n");
    printf ("VALOR TOTAL.......................: R$%.2f\n", 619.00);
    printf ("Formas de Pagamento:\n");
    printf ("PIX\n");
    printf ("Cartao de Debito\n");
    printf ("Cartao de Credito (Ate 12x s/ juros)\n\n");
    printf ("Obrigada por Comprar Conosco! Have a good day!\n");

    return 0;
}