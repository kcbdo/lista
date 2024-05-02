#include <stdio.h>
#include <math.h>

int main (){
    int a, unidade, dezena, centena, numeroinvertido; 

    printf ("Digite um numero de tres digitos: \n");
    scanf ("%d", &a);

    unidade = a % 10; 
    dezena = (a / 10) % 10;
    centena = a / 100;
    numeroinvertido = unidade * 100 + dezena * 10 + centena; 

    printf ("Numero invertido: %d. \n", numeroinvertido);

return 0;
}