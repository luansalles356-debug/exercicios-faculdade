#include <stdio.h>

int main() {
     float distancia, consumo, preco, gasto, litros_necessarios;
     printf("Qual a distancia da viagem?");
     scanf("%f", &distancia);
     printf("Qual o consumo do carro?");
     scanf("%f", &consumo);
     printf("Qual o preco da gasolina?");
     scanf("%f", &preco);

     litros_necessarios = distancia / consumo;
     
     gasto = preco * litros_necessarios;

     printf ("\nO valor gasto em gasolina e: %.2f\n", gasto);


    return 0;
}