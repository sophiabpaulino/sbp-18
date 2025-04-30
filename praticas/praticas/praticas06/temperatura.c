#include <stdio.h>

int main () {
    float temperatura = 0.0f;
    scanf("%f", &temperatura);


    if (temperatura > 40.0f) {
        printf("muito quente\n");
    } else if (temperatura > 30.0f && temperatura < 40.0f) {
        printf("quente\n");
    } else if (temperatura > 20.0f && temperatura < 30.0f) {
        printf("agradavel\n");
    } else if (temperatura < 20.0f) {
        printf("frio\n");
    }

    return 0;
}