#include <stdio.h>

int main (){

    int dividendo, divisor, quociente, resto; 
    printf ("Informe o valor do dividendo: \n");
    scanf ("%d", &dividendo);
    printf ("Informe o valor do divisor: \n");
    scanf ("%d", &divisor); 

    quociente = dividendo / divisor; 
    resto = dividendo % divisor;

    printf ("quociente: %d. \n", quociente);
    printf ("resto: %d. \n", resto); 
return 0; 
}