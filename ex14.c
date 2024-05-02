#include <stdio.h> 
#include <math.h>

int main (){

    int a;
    float NS; // NS = novo saldo 
    
    printf ("Digite um numero inteiro: \n"); 
    scanf ("%d", &a);

    NS = a * 1.01;

    printf ("NS: %.2f. \n", NS);
return 0;
}