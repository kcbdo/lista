#include <stdio.h>
#include <math.h>

int main (){
int l, t, vm,d; 

printf ("Informe a velocidade media em km por hora: \n");
scanf ("%d", &vm); 

printf ("Informe o tempo total em horas gasto para fazer o percurso: \n "); 
scanf ("%d", &t);

d = vm * t; 
l = d / 12; 

printf ("Distancia total percorrida: %d. \n", d); 
printf ("Quantidade de litros de combustivel que foram gastos: %d. \n", l); 

return 0; 
}