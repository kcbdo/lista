#include <stdio.h>

int main() {
    float salariofixo, comissaotvlcd, comissaotvled, comissaotvplasma;
    int tvsvendidaslcd, tvsvendidasled, tvsvendidasplasma;
    float salariototal;

    comissaotvlcd = 50.00;
    comissaotvled = 60.00;
    comissaotvplasma = 55.00;

    printf("Digite a quantidade de TVs LCD vendidas: ");
    scanf("%d", &tvsvendidaslcd);
    printf("Digite a quantidade de TVs LED vendidas: ");
    scanf("%d", &tvsvendidasled);
    printf("Digite a quantidade de TVs Plasma vendidas: ");
    scanf("%d", &tvsvendidasplasma);

    salariofixo = 2 * 1100.00; // 2 * salário mínimo atual
    salariototal = salariofixo + (comissaotvlcd * tvsvendidaslcd) + (comissaotvled * tvsvendidasled) + (comissaotvplasma * tvsvendidasplasma);

    printf("O salario final do empregado e: R$ %.2f\n", salariototal);

return 0;
}