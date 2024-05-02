#include <stdio.h>
#include <math.h>

int main() {
    float p, i, valoracumulado;
    int n;
    
    printf("Informe o valor da aplicacao mensal : ");
    scanf("%f", &p);
    
    printf("Informe a taxa: ");
    scanf("%f", &i);
    
    printf("Informe a quantidade de meses: ");
    scanf("%d", &n);
    
    valoracumulado = p * (pow(1 + i, n) - 1) / i;
    
    printf("O valor acumulado e: %.2f", valoracumulado);
    
return 0;
}
