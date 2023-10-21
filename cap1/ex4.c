// Escreva um programa que receba dois números,
//  calcule e apresente o resultado
// do primeiro número elevado ao segundo

#include <stdio.h>
#include <math.h>

int main()
{
    float n1, n2, result;

    printf("Insira um número: \n");
    scanf("%f", &n1);

    printf("Insira um segundo número: \n");
    scanf("%f", &n2);

    result = pow(n1, n2);

    printf("\n Resultado do %.2f elevado a %.2f é: %.2f", n1, n2, result);
    return (0);
}