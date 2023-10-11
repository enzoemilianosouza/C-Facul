/*escreva um programa que leia um número inteiro e
apresente seu antecessor e seu sucessor. */

#include <stdio.h>

int main()
{
    int numero, ant, suc;

    printf("Digite um número: ");
    scanf("%d", &numero);

    ant = numero - 1;
    suc = numero + 1;

    printf("\nO antecessor é: %d", ant);
    printf("\nO sucessor é: %d", suc);

    return 0;
}