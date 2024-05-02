#include <stdio.h>

int main() {
    int numero, unidade, dezena, centena, milhar;

    printf("Digite um numero inteiro de 4 digitos: ");
    scanf("%d", &numero);

    unidade = numero % 10;
    dezena = (numero / 10) % 10;
    centena = (numero / 100) % 10;
    milhar = numero / 1000;

    printf("O numero digitado separado por casas e: %d %d %d %d\n", milhar, centena, dezena, unidade);

return 0;
}