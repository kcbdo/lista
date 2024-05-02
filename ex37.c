#include <stdio.h>
#include <math.h>

int main (){
int vp, t;
float i, vpa;

printf ("Informe o valor inicial da prestacao: \n"); 
scanf ("%d", &vp); 

printf ("Informe o tempo de atraso da prestacao em meses: \n"); 
scanf ("%d", &t); 

printf ("Informe a taxa de juros: \n"); 
scanf ("%f", &i); 

vpa = vp + (vp * (i/100) * t); 

printf ("Valor da prestacao em atraso: %.2f. \n", vpa);
return 0;
}