#include <stdio.h>
#include <math.h>

int main (){
int v1, v2; 

printf ("Informe o valor inicial do produto: \n");
scanf ("%d", &v1); 

v2 = 0.91 * v1; 

printf ("O valor do produto com o desconto e: %d. \n", v2); 

return 0; 
}