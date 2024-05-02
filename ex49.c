#include <stdio.h>

int main() {
    int dvds, alugueispormes;
    float valoraluguel, faturamentoanual, valormultasmes, dvdsestragados, dvdsrepostos;

    printf("Informe a quantidade de DVDs que a locadora possui: ");
    scanf("%d", &dvds);

    printf("Informe o valor cobrado por cada aluguel: ");
    scanf("%f", &valoraluguel);

    alugueispormes = dvds / 3;
    faturamentoanual = alugueispormes * valoraluguel * 12;

    printf("Faturamento anual da locadora: R$ %.2f\n", faturamentoanual);

    valormultasmes = (alugueispormes / 10) * valoraluguel * 0.1;

    printf("Valor ganho com multas por mês: R$ %.2f\n", valormultasmes);

    dvdsestragados = dvds * 0.02;
    dvdsrepostos = dvdsestragados / 10;

    printf("Quantidade de DVDs que a locadora terá no final do ano: %d \n", dvds + dvdsrepostos - dvdsestragados);

return 0;
}