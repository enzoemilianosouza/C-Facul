// Desafio: Escreva um algoritmo em C que calcule
//  e retorno o valor da a área e do perímetro de um círculo.
//  Como entrada, ele deverá receber o valor do raio deste círculo.
//  No campo de resposta você deverá colar o link do github onde armazenará seu código.

#include <stdio.h>

int main()
{
    int raio;
    int fatorMultiplicativo = 2;
    double valorPi = 3.14159;
    double result;

    printf("Insira o valor do raio! ");
    scanf("%d", &raio);

    result = (fatorMultiplicativo * valorPi) * raio;
    printf("O resultado é: \n %f", result);
    return (0);
}