#include <stdio.h> 

int main (){
float salariominimo, salariorecebido, qtdsalarios; 

printf ("Informe o valor do salario minimo: \n"); 
scanf ("%f", &salariominimo); 

printf ("Informe o salario recebido por determinada pessoa: \n");
scanf ("%f", &salariorecebido);

qtdsalarios = salariorecebido / salariominimo; 

printf ("Segue a quantidade de salarios minimos que essa pessoa recebeu: %.2f. \n", qtdsalarios);

return 0;
}