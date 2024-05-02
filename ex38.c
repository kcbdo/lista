#include <stdio.h>
#include <math.h>

int main (){
int A, B, temp;

    printf("Digite o valor de A: \n");
    scanf("%d", &A);
    
    printf("Digite o valor de B: \n");
    scanf("%d", &B);

    printf("Valores originais:\n");
    printf("A = %d. \n", A);
    printf("B = %d. \n", B);

    temp = A;
    A = B;
    B = temp;

    printf("\nValores atualizados:\n");
    printf("A = %d. \n", A);
    printf("B = %d. \n", B);

return 0; 
}