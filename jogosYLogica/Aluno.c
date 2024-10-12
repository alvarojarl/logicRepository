#include <stdio.h>
#include <stdlib.h>

int a, b, c;
char x, w;

struct Dados_Aluno
{
    char nome[40];
    int idade;
    float altura;
    float peso;
};

int main(void)
{
    struct Dados_Aluno aluno;

    printf("Dados do aluno:\n\n");

    printf("Digite o nome: \n");
    fgets(aluno.nome, 40, stdin);

    printf("Digite a idade:\n");
    scanf("%d", &aluno.idade);

    printf("Digite a altura:\n");
    scanf("%f", &aluno.altura);

    printf("Digite o peso: \n");
    scanf("%f", &aluno.peso);

    printf("Nome do aluno: %s \n Idade: %d \n", aluno.nome,aluno.idade);
    printf("altura: %f \n pesa: %f \n",aluno.altura,aluno.peso);

    return 0;
}