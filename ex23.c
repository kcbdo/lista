#include <stdio.h>
#include <math.h>

int main (){
int base, altura, profundidade;    
double diagonal;

printf ("Digite o valor da base do paralelepipedo: \n");
scanf ("%d", &base);
printf ("Digite o valor da altura do paralelepipedo: \n");
scanf ("%d", &altura);
printf ("Digite o valor da profundidade do paralelepipedo: \n");
scanf ("%d", &profundidade);

diagonal = sqrt (pow (base, 2 ) + pow (altura, 2) + pow (profundidade, 2)); 

printf ("Diagonal do paralelepipedo: %.2lf.  \n", diagonal); 

return 0;
}