#include <stdio.h>
#include <math.h>

int main (){
int cateto1, cateto2;
double hipotenusa; 

printf ("Informe o valor do primeiro cateto: \n");
scanf ("%d", &cateto1);

printf ("Informe o valor do segundo cateto: \n");
scanf ("%d", &cateto2);

hipotenusa = sqrt (pow (cateto1, 2) + pow (cateto2, 2));

printf ("O valor da hipotenusa e: %.2lf. \n", hipotenusa); 

return 0;
}