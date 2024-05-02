#include <stdio.h>
#include <math.h>

int main (){
int c; 
double f; 

printf ("Declare a temperatura em graus centigrados: \n"); 
scanf ("%d", &c); 

f = ((9 * c) + 160)  / 5; 

printf ("Valor da temperatura em Fahrenheit: %.2lf. \n", f); 
return 0;
}