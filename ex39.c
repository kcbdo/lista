#include <stdio.h>
#include <math.h>

int main (){
int numerador, denominador; 
float resultado; 

printf("Digite o numerador da fracao: \n ");
scanf("%d", &numerador);
printf("Digite o denominador da fracao: \n ");
scanf("%d", &denominador);

resultado = numerador / denominador; 

printf ("O valor decimal da fracao: %.2f. \n", resultado); 
return 0;
}