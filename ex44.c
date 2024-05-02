#include <stdio.h> 

int main (){
int pesokg;
float pesog, peso12; 

printf ("Informe o seu peso em kilogramas: \n");
scanf ("%d", &pesokg);

pesog = pesokg * 1000;
peso12 = 1.12 * pesog;

printf ("O pesso correspondente em gramas = %.2f. \n", pesog);
printf ("O peso em gramas com um aumento de 12 porcento = %.2f. \n", peso12); 

return 0;
}