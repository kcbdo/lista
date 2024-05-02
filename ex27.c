#include <stdio.h>
#include <math.h>

int main (){
double xnum1, xnum2, xnum3, x; 

printf ("Informe tres numeros reais: \n");
scanf ("%lf %lf %lf", &xnum1, &xnum2, &xnum3); 

x = xnum1 + (xnum2 / (xnum3 + xnum1)) + 2 * (xnum1 - xnum2); 

printf ("O valor de x e: %.2lf. \n", x); 

return 0;
}