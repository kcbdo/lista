#include <stdio.h>
#include <math.h>

int main (){
    int diagonalmaior, diagonalmenor, area;

    printf ("Informe o valor da diagonal maior do losango: \n");
    scanf ("%d", &diagonalmaior);

    printf ("Informa o valor da diagonal menor do losango: \n");
    scanf ("%d", &diagonalmenor); 

    area = (diagonalmaior * diagonalmenor)/ 2;

    printf ("Area do losango: %d. \n", area); 

return 0;
}