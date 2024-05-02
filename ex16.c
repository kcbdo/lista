#include <stdio.h> 
#include <math.h>

int main (){
    int dd, mm, aa, ddmmaa;
    
    printf ("Insira o dia: \n");
    scanf ("%02d", &dd);
    printf ("Insira o mes: \n");
    scanf ("%02d", &mm);
    printf ("Insira o ano: \n");
    scanf ("%02d", &aa);

    ddmmaa = 10000 * dd + 100 * mm + aa;  

    printf ("ddmmaa: %06d. \n", ddmmaa);

return 0; 
}