#include <stdio.h>
#include <math.h>

int main (){
int b, h, per, area;
double diag; 

printf ("Digite o valor da base do retangulo: \n");
scanf ("%d", &b);

printf ("Digite o valor da altura do retangulo: \n");
scanf ("%d", &h);

per = (b * 2) + (h * 2);
area = b * h; 
diag = sqrt (pow (b,2) + pow (h, 2)); 

printf ("Valor do perimetro do retangulo: %d. \n", per);
printf ("Valor da area do retangulo: %d. \n", area);
printf ("Valor da diagonal do retangulo: %.2lf. \n", diag);

return 0;
}