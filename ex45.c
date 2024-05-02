#include <stdio.h> 

int main (){
int numero, sucessor; 

printf ("Digite um numero entre 0 e 60: \n"); 
scanf ("%d", &numero); 

sucessor = (numero + 1) % 61; 

printf ("O sucessor e: %d. \n", sucessor);
return 0;
}