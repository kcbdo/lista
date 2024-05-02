#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2;
    float distancia;

    printf("Digite as coordenadas do ponto A (x1, y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Digite as coordenadas do ponto B (x2, y2): ");
    scanf("%f %f", &x2, &y2);

    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("A distancia entre os pontos A e B e: %.2f\n", distancia);

return 0;
}