#include <stdio.h>

int main () { 
    float mediafinal = 0.0f;

    printf("Digite sua media final:");
    scanf ("%f", &mediafinal);

    if (mediafinal == 0.0f) {
        printf("A mencao eh 'SR'.\n");
    } else if (mediafinal < 3.0f) {
        printf ("A mencao eh 'II'.\n");
    } else if (mediafinal < 5.0f) {
      printf ("A mencao eh 'MI'.\n");
    } else if (mediafinal < 7.0f) {
        printf("A mencao eh 'MM'.\n");
    } else if (mediafinal < 9.0f) {
        printf("A mencao eh 'MS'.\n");
    } else { 
        printf("A mencao eh 'SS'.\n");
    }
        
    

    


    return 0;
}