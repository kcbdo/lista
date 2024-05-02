#include <stdio.h> 
#include <math.h>

int main (){
    double a, b, x, y;

    printf ("Informe dois numeros reais: \n");
    scanf ("%lf %lf", &a, &b); 

    x = pow ((a-b), 2);
    y = pow (a, 2) - pow (b, 2);

    printf ("O valor do quadrado da diferenta = %.2lf. \n", x);
    printf ("O valor da diferenca dos quadrados = %.2lf. \n", y); 

return 0;
}
