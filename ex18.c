#include <stdio.h>
#include <math.h>

int main (){
    int kw; 
    float kw1, total, totaldesconto, salario;

    printf ("Insira o valor do salario: \n");
    scanf ("%f", &salario);

    printf ("Insira a quantidade de quilowatts gasta pela residencia: \n");
    scanf ("%d", &kw);

    kw1 = salario / 700; // kw1 = valor pago por 1 quilowatt
    total = kw * (salario / 7);
    totaldesconto = total * 0.90; 

    printf ("Valor pago por 1 quilowatt: %.2f. \n ", kw1);
    printf ("Valor total: %.2f. \n", total); 
    printf ("Valor total com desconto: %.2f. \n", totaldesconto); 

return 0; 
}