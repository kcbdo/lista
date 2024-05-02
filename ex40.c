#include <stdio.h> 

int main (){
float valor, valortotal; 

printf ("Informe o valor da conta sem a porcentagem destinada ao garcom: \n"); 
scanf ("%f", &valor); 

valortotal = 1.1 * valor; 

printf ("Valor da conta com a porcentagem do garcom = %.2f. \n", valortotal);

return 0; 
}