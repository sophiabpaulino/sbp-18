#include <math.h>
#include <stdio.h>


int main () {
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%i", a);
  
    scanf("%i", b);
   
    scanf("%i", c);
   

    float delta = b*b - 4*a*c;


    if (delta < 0) {
        printf("equacao nao tem raizes!\n"); 
    } else if (delta > 0) {
        float x1 = (-b + sqrt(delta)) / 2*a;
        float x2 = (-b - sqrt(delta)) / 2*a;
        printf("%.1f e %.1f sao as raizes", x1, x2);
    }
    
    
    return 0;
}