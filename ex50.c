#include <stdio.h>

int main() {
    int numeroconta, inverso, digitoverificador;

    printf("Digite o numero da conta corrente com tres digitos: ");
    scanf("%d", &numeroconta);

  
    inverso = ((numeroconta % 10) * 100) + (((numeroconta / 10) % 10) * 10) + (numeroconta / 100);

    digitoverificador = numeroconta + inverso;

    digitoverificador = (digitoverificador % 10);

    printf("O digito verificador da conta e: %d\n", digitoverificador);

return 0;
}