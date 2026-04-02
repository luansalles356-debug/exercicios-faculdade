#include <stdio.h>

int main() {
    float num, metade;

    printf("Entre com um numero: ");
    scanf("%f", &num);

    metade = num / 2;

    printf("A metade de %.2g e %g\n", num, metade);

    return 0;
}