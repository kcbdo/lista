#include <stdio.h>
#include <math.h>

int main (){
    int a; 
    
    printf ("Insira um numero de tres digitos: \n");
    scanf ("%d", &a);

    int dezena = (a / 10) % 10;

    printf ("Algarismo da dezena: %d. \n", dezena);

return 0;
}