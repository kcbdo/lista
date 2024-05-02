#include <stdio.h>
#include <math.h>

int main (){
int salarioliquido, ha, am, dinss, salario; 

printf ("Informe o valor do salario recebido: \n");
scanf ("%d", &salario);
printf ("Informe o valor da hora aula: \n"); 
scanf ("%d", &ha); 
printf ("Informe o numero de aulas dadas no mes: \n"); 
scanf ("%d", &am); 
printf ("Informe o valor de desconto do INSS: \n");
scanf ("%d", &dinss); 

salarioliquido = (ha * am) - (dinss/100)*salario; 

printf ("Valor do salario liquido: %d. \n", salarioliquido); 
return 0; 
}
