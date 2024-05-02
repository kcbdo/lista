#include <stdio.h> 

int main (){

    int horas, minutos, minutospassados;

    printf("Digite a hora (horas e minutos separados por espaco): \n");
    scanf("%d %d", &horas, &minutos); 

    minutospassados = horas * 60 + minutos;

    printf("Desde o inicio do dia se passaram %d minutos.\n", minutospassados);

    return 0; 
}