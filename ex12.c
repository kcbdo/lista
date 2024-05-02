#include <stdio.h>
#include <math.h>

int main (){
    int MP, a, b, c, d; // MP = media ponderada
    printf ("Digite quatro numeros: \n"); 
    scanf ("%d %d %d %d", &a, &b, &c, &d);

    MP = ((a*1) +  (b*2) + (c*3) + (d*4))/ 10;

    printf ("MP: %d. \n", MP); 
return 0; 
}