#include <stdio.h>
#include <math.h>

int main (){
int r; 
double per, area; 

printf ("Digite o valor do raio do circulo: \n"); 
scanf ("%d", &r );

per = 2 * 3.14 * r ; // o valor 3,14 corresponde ao valor do pi.
area = 3.14 * r * r ; // o valor 3,14 corresponde ao valor do pi. 

printf ("Perimetro do ciruclo: %.2lf. \n", per); 
printf ("Area do circulo: %.2lf. \n", area); 

return 0; 
}