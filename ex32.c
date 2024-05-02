#include <stdio.h>
#include <math.h>

int main (){
int t, horas, minutos, segundos; 

printf ("Informe o tempo do evento em segundos: \n");
scanf ("%d", &t);

horas = t / 3600 ; 
minutos = (t % 3600) / 60;
segundos = t % 60; 

printf ("Tempo total: %d horas, %d minutos, %d segundos. \n", horas, minutos, segundos); 

return 0; 
}