#include <stdio.h>
#include <math.h>

int main (){
double r, volume, h; 

printf ("Informe o raio da lata de oleo: \n"); 
scanf ("%lf", &r); 

printf ("Informe a altura da lata de oleo: \n"); 
scanf ("%lf", &h);

volume = 3.14159 * pow (r, 2) * h; 

printf ("Volume da lata de oleo: %.2lf. \n", volume); 

return 0; 
}