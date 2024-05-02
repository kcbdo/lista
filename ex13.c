#include <stdio.h>
#include <math.h>

int main (){

    int a, quadrado; 
    float raiz; 
    printf ("Digite um  numero inteiro: \n");
    scanf ("%d", &a); 

    quadrado = a * a; 
    raiz = sqrt (a); 

    printf ("quadrado: %d. \n", quadrado); 
    printf ("raiz: %.2f. \n", raiz);

return 0; 
}