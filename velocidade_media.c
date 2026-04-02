#include <stdio.h>

int main() {
    float dist, tempo, velocidade;
    printf("Entre com uma distancia:");
    scanf("%f", &dist);
    printf("Entre com um tempo:");
    scanf("%f", &tempo);

    velocidade = dist / tempo;

    printf ("\nA velocidade media do trajeto e:%g\n", velocidade);

    return 0;
}