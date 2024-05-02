#include <stdio.h>
#include <math.h>

int main (){
int a1, r, a5;

printf ("Informe o valor do primeiro termo da PG: \n"); 
scanf ("%d", &a1);

printf ("Informe a razao da PG: \n"); 
scanf ("%d", &r); 

a5 = a1 * pow (r, 4); 

printf ("O termo numero 5 da PG possui o seguinte valor: %d. \n", a5); 

return 0; 
}