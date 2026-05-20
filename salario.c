#include <stdio.h>

int main () {
    float salario, porcentagem, aumento;
    printf ("Qual o valor do salario atual?");
    scanf ("%f", &salario);
    printf ("Quantos porcentos recebeu de aumento?");
    scanf ("%f", &porcentagem);
    
    aumento = salario * porcentagem / 100;

    printf ("o valor total do aumento e: %.2f\n\n", aumento);
    printf ("O valor total do salario com o aumento e: %.2f\n\n", salario + aumento);

    return 0; 
}