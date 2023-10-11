/*Primeiro programa em C*/

#include <stdio.h>           /*esta instrução insere o conteúdo do arquivo stdio.h*/
main()                       /*todo programa C deve possuir essa linha*/
{                            /*delimita o inicio das instruções*/
    printf('Hello, world!'); /*imprime uma mensagem na tela*/
    return (0)               /*este retorno indica que o programa está finalizando sem erros*/
};                           /*delimita o fim do conjunto de instruções da função main*/

/*<inclusão de bibliotecas>
int main()
{
 <conjunto de instruções>
 return (0);
}*/

/*
insere o conteúdo do arquivo stdio.h
#include <stdio.h>
int main()
------------------------------------ declaração das variáveis -
 int idade, ano;
 float altura;
 char nome[30];
 ----------------------------------- entrada de dados -
 ----------------------------------- mensagem ao usuário -
 printf (“Digite o seu nome: “);
 scanf (“%s”, nome); /* leitura do nome
 ----------------------------------- mensagem ao usuário -
 printf (“Digite a idade: “);
 scanf (“%d”, &idade); ------------- leitura da idade
 ----------------------------------- mensagem ao usuário -
 printf (“Digite a altura: “);
 scanf (“%f”, &altura); -------- leitura da altura
 ------------------------------- processamento -
 ------------------------------- cálculo do ano de nascimento
 ano = 2012 - idade;
 ------------------------------- saída de dados
 printf (“\nO nome e: %s”, nome);
 printf (“\nA altura e: %f”, altura);
 printf (“\nA idade e: %d”, idade);
 printf (“\nO ano de nascimento e: %d “, ano);
 return (0);
}
*/