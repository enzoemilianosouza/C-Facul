/*
    Este programa solicita ao usuário o nome, idade e altura,
    calcula o ano de nascimento com base na idade e imprime essas informações.
*/

#include <stdio.h> // Inclui a biblioteca de entrada/saída padrão em C

int main()
{
    // Declaração das variáveis
    int idade, ano;
    float altura;
    char nome[30];
    float anoAtual = 2023;

    // Mensagem ao usuário: solicita o nome e lê a entrada do usuário
    printf("Digite o seu nome: ");
    scanf("%s", nome);

    // Mensagem ao usuário: solicita a idade e lê a entrada do usuário
    printf("Digite a idade: ");
    scanf("%d", &idade);

    // Mensagem ao usuário: solicita a altura e lê a entrada do usuário
    printf("Digite a altura: ");
    scanf("%f", &altura);

    // Cálculo do ano de nascimento com base na idade
    ano = anoAtual - idade;

    // Saída de dados: imprime as informações coletadas
    printf("\nO nome é: %s", nome);
    printf("\nA altura é: %.2f", altura); // O uso de %.2f limita a altura a dois dígitos após o ponto decimal
    printf("\nA idade é: %d", idade);
    printf("\nO ano de nascimento é: %d\n", ano);

    return 0; // Retorna 0 para indicar que o programa foi concluído com sucesso
}
