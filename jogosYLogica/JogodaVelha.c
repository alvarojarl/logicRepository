#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "pt_BR.UTF-8");
    // declaração das variaveis
    int i, j, x = 0;
    // declaração da matris
    int velha[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    // definição dos parametros de encerramento e posição
    int h, v, chose = 0;
    // definição do parametro de escape e confirmação
    int safe;
    // definição do parametro de validação
    int countx, counto, countkill;

    // condicional para manter o jogo em funcionamento até resolução
    do
    {

        printf("|||||||||||||||||||||||||||||||||||||||||||\n||||||||||||||Jogo da Velha||||||||||||||||\n|||||escolha 1 para jogar ou 2 para |||||||\n||||||||||||ver as instruções||||||||||||||\n|||||||||||||||0 para Sair|||||||||||||||||\n|||||||||||||||||||||||||||||||||||||||||||\n\n");
        // definição do valor para proceguir ou sair
        scanf("%d", &chose);

        // tratativa da seleção
        switch (chose)
        {
        case 1:
            do
            {
                // demonstra as posições do jogo
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        if (velha[i][j] == 0)
                        {
                            printf("( )");
                        }
                        else if (velha[i][j] == 1)
                        {
                            printf("(X)");
                        }
                        else
                        {
                            printf("(O)");
                        }
                    }
                    printf("\n");
                }

                // trata os dados inseridos pelo usuário pela primeira vez, depois utiliza dados pré-definidos
                if (x == 0)
                {
                    printf("Digite a posição da Linha:");
                    scanf("%d", &v);

                    printf("depois a Coluna:");
                    scanf("%d", &h);

                    printf("Escolha 1:X ou 2:O :");
                    scanf("%d", &x);
                    velha[v - 1][h - 1] = x;
                }
                // tratativa de dados caso seja O == 2
                else if (x == 1)
                {

                    // alteração para os valores posterios
                    x = 2;

                    // executa a tratativa do dado caso seja um valor existente ou conflitante
                    do
                    {
                        printf("Digite a posição da Linha:");
                        scanf("%d", &v);

                        printf("depois a Coluna:");
                        scanf("%d", &h);

                        if (velha[v - 1][h - 1] == 2)
                        {
                            safe = 1;
                            printf("Posição desejada já contém valor");
                        }
                        else if (velha[v - 1][h - 1] == 1)
                        {
                            safe = 1;
                            printf("Posição preenchida pelo X");
                        }
                        else
                        {
                            safe = 0;
                        }
                    } while (safe != 0);
                    // atribui valor pré-definido para futura visualização
                    velha[v - 1][h - 1] = x;
                }

                // tratativa de dados caso seja X == 1
                else if (x == 2)
                {

                    // alteração para os valores posteriores
                    x = 1;

                    // executa a tratativa do dado caso seja um valor existente ou conflitante
                    do
                    {
                        printf("Digite a posição da Linha:");
                        scanf("%d", &v);

                        printf("depois a Coluna:");
                        scanf("%d", &h);

                        if (velha[v - 1][h - 1] == 1)
                        {
                            safe = 1;
                            printf("Posição desejada já contém valor");
                        }
                        else if (velha[v - 1][h - 1] == 2)
                        {
                            safe = 1;
                            printf("Posição preenchida pelo O");
                        }
                        else
                        {
                            safe = 0;
                        }
                    } while (safe != 0);
                    // atribui valor pré-definido para futura visualização
                    velha[v - 1][h - 1] = x;
                }
                // valida as linhas
                for (i = 0; i < 3; i++)
                {
                    counto = countx = 0;
                    for (j = 0; j < 3; j++)
                    {   
                        if (velha[i][j] == 1)
                            countx++;
                        else if (velha[i][j] == 2)
                            counto++;
                        if (countx == 3)
                        {
                            printf("X ganhou \n");
                            chose = 0;
                            for (i = 0; i < 3; i++)
                            {
                                for (j = 0; j < 3; j++)
                                {
                                    if (velha[i][j] == 0)
                                    {
                                        printf("( )");
                                    }
                                    else if (velha[i][j] == 1)
                                    {
                                        printf("(X)");
                                    }
                                    else
                                    {
                                        printf("(O)");
                                    }
                                }
                                printf("\n");
                            }
                            break;
                            chose = 0;
                        }
                        else if (counto == 3)
                        {
                            printf("O ganhou \n");
                            chose = 0;
                            for (i = 0; i < 3; i++)
                            {
                                for (j = 0; j < 3; j++)
                                {
                                    if (velha[i][j] == 0)
                                    {
                                        printf("( )");
                                    }
                                    else if (velha[i][j] == 1)
                                    {
                                        printf("(X)");
                                    }
                                    else
                                    {
                                        printf("(O)");
                                    }
                                }
                                printf("\n");
                            }
                            break;
                            chose = 0;
                        }
                    }
                }
                //valida as colunas
                for (i = 0; i < 3; i++)
                {
                    counto = countx = 0;
                    for (j = 0; j < 3; j++)
                    {   
                        if (velha[j][i] == 1)
                            countx++;
                        else if (velha[j][i] == 2)
                            counto++;
                        if (countx == 3)
                        {
                            printf("X ganhou \n");
                            chose = 0;
                            for (i = 0; i < 3; i++)
                            {
                                for (j = 0; j < 3; j++)
                                {
                                    if (velha[i][j] == 0)
                                    {
                                        printf("( )");
                                    }
                                    else if (velha[i][j] == 1)
                                    {
                                        printf("(X)");
                                    }
                                    else
                                    {
                                        printf("(O)");
                                    }
                                }
                                printf("\n");
                            }
                            break;
                            chose = 0;
                        }
                        else if (counto == 3)
                        {
                            printf("O ganhou \n");
                            chose = 0;
                            for (i = 0; i < 3; i++)
                            {
                                for (j = 0; j < 3; j++)
                                {
                                    if (velha[i][j] == 0)
                                    {
                                        printf("( )");
                                    }
                                    else if (velha[i][j] == 1)
                                    {
                                        printf("(X)");
                                    }
                                    else
                                    {
                                        printf("(O)");
                                    }
                                }
                                printf("\n");
                            }
                            break;
                            chose = 0;
                        }
                    }
                }

                //avalia a diagonal principal
                for (i = 0; i < 3; i++)
                {
                    counto = countx = 0;
                    if (velha[i][i] == 1)
                        countx++;
                    else if (velha[i][i] == 2)
                        counto++;
                    if (countx == 3)
                    {
                        printf("X ganhou \n");
                        chose = 0;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 3; j++)
                            {
                                if (velha[j][i] == 0)
                                {
                                    printf("( )");
                                }
                                else if (velha[j][i] == 1)
                                {
                                    printf("(X)");
                                }
                                else
                                {
                                    printf("(O)");
                                }
                            }
                            printf("\n");
                        }
                        break;
                        chose = 0;
                    }
                    else if (counto == 3)
                    {
                        printf("O ganhou \n");
                        chose = 0;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 3; j++)
                            {
                                if (velha[j][i] == 0)
                                {
                                    printf("( )");
                                }
                                else if (velha[j][i] == 1)
                                {
                                    printf("(X)");
                                }
                                else
                                {
                                    printf("(O)");
                                }
                            }
                            printf("\n");
                        }
                        break;
                        chose = 0;
                    }
                }

                countx = counto = 0;

                //avalia a diagonal inversa
                for (i = 0; i < 3; i++)
                {
                    if (velha[i][2 - i] == 1)
                        countx++;
                    else if (velha[i][2 - i] == 2)
                        counto++;
                }
                if (countx == 3)
                {
                    printf("X ganhou \n");
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 3; j++)
                        {
                            if (velha[i][j] == 0)
                            {
                                printf("( )");
                            }
                            else if (velha[i][j] == 1)
                            {
                                printf("(X)");
                            }
                            else
                            {
                                printf("(O)");
                            }
                        }
                        printf("\n");
                    }
                    break;
                    chose = 0;
                }

                else if (counto == 3)
                {
                    printf("O ganhou \n");
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 3; j++)
                        {
                            if (velha[i][j] == 0)
                            {
                                printf("( )");
                            }
                            else if (velha[i][j] == 1)
                            {
                                printf("(X)");
                            }
                            else
                            {
                                printf("(O)");
                            }
                        }
                        printf("\n");
                    }
                    break;
                    chose = 0;
                }

                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        if (velha[i][j] == 0)
                        {
                            countkill = 0;
                            break;
                        }
                        if (velha[i][j] != 0)
                        {
                            countkill++;
                        }
                        if (countkill == 9)
                        {
                            printf("Empate\n");
                            chose = 0;
                        }
                    }
                }

            } while (chose != 0);

            break;

        case 2:
            for (i = 1; i <= 3; i++)
            {
                for (j = 1; j <= 3; j++)
                {
                    if (i == j && j + i != 0)
                    {
                        printf("%d( )%d ", i, j);
                    }
                    else if (i > j)
                    {
                        printf("%d( )%d ", i, j);
                    }
                    else if (i < j)
                    {
                        printf("%d( )%d ", i, j);
                    }
                    else
                    {
                        printf("%d( )%d ", i, j);
                    }
                }
                printf("\n\n");
            }
            break;
        case 0:
            break;
        }
    } while (chose != 0);

    // Exemplo de funcionalidade para o usuário
    return 0;
}