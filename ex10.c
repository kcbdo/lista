#include <stdio.h>

int main (){

float a, b, media; 
printf ("\nDigite dois numeros: \n"); 
scanf ("%f %f", &a, &b);

media = (a + b) / 2; 
printf ("\nmedia: %.2f. \n", media);
return 0;
}