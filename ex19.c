#include <stdio.h>
#include <math.h>

int main (){
    int VF;
    float custo; // VF = Valor de fabrica 

    printf ("Valor de frabrica do veiculo: \n"); 
    scanf ("%d", &VF);

    custo = VF + 0.12 * VF + 0.3 * VF; 

    printf ("Custo do veiculo para o consumidor: %.2f. \n", custo); 
return 0;
}