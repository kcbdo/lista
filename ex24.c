#include <stdio.h>
#include <math.h>

int main (){
int base, altura, areabase; 
double volume; 

printf ("Digite o valor da base da piramide: \n");
scanf ("%d", &base);
printf ("Digite o valor da altura da piramide: \n"); 
scanf ("%d", &altura);

areabase = base * base; 
volume = (areabase * altura) / 3;

printf ("Volume da piramide: %.2lf. \n", volume); 
return 0;
}