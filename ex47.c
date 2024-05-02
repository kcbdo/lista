#include <stdio.h>

int main (){
    int n, nd; // nd = numero de diagonais diferentes; n = numero de lados do poligono; 

    printf ("Programa desenvolvido para calcular a quantidade de diagonais diferentes de um poligono \n");
    printf ("Informe o numero de lados do poligono: ");
    scanf ("%d", &n); 

    nd = (n-3)/ 2; 

    printf ("A quantidade de diagonais diferentes do poligono e: %d. \n", nd);

return 0; 
}