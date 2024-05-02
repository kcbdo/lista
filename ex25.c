#include <stdio.h>
#include <math.h>

int main (){
int altura, base; 
float area;

printf ("Informe o valor da altura do triangulo: \n"); 
scanf ("%d", &altura);

printf ("Informe o valor da base do triangulo: \n");
scanf ("%d", &base); 

area = (base * altura ) / 2; 

printf ("Area do triangulo: %.2f. \n", area);

return 0;
}