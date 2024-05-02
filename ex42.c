#include <stdio.h> 

int main (){
float deposito, taxa, rendimento, valortotal; 

printf ("Informe o valor do deposito: \n");
scanf ("%f", &deposito); 
printf ("Informe a taxa: \n");
scanf ("%f", &taxa); 

rendimento = deposito * (taxa/100); 
valortotal = rendimento + deposito; 

printf ("Total de rendimentos = %.2f. \n", rendimento);
printf ("Valor total = %.2f. \n", valortotal);
return 0;
}