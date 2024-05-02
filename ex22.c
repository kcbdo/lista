#include <stdio.h>
#include <math.h>

int main (){
    int lado, perimetro, area;
    double diagonal; 

    printf ("Digite o valor do lado do quadrado: \n");
    scanf ("%d", &lado);

    perimetro = 4 * lado ;
    area = lado * lado; 
    diagonal = lado * sqrt (2); 

    printf ("Perimetro do quadrado: %d. \n", perimetro);
    printf ("Area do quadrado: %d. \n", area);
    printf ("Diagonal do quadrado: %.2lf. \n", diagonal);

return 0; 
}