#include <stdio.h>
#include <math.h>

int main (){
int a1, r, a10; 

printf ("Informe o valor do primeiro termo da PA: \n");
scanf ("%d", &a1);

printf ("Informe a razao da PA: \n");
scanf ("%d", &r); 

a10 = a1 + 9 * r; 

printf ("O termo numero 10 da PA possui o seguinte valor: %d. \n", a10); 

return 0; 
}