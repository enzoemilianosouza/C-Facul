/*Elabore um programa que receba quatro notas e calcule a média aritmética entre elas.*/

#include <stdio.h>

int main()
{
    float n1, n2, n3, n4, media;

    printf("Digite a nota 1: \n");
    scanf("%f", &n1);

    printf("Digite a nota 2: ");
    scanf("%f", &n2);

    printf("Digite a nota 3: ");
    scanf("%f", &n3);

    printf("Digite a nota 4: ");
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4) / 4;
    printf("\nA média é: %.2f\n", media);

    return 0;
}
