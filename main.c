#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    while(1) { /* Loop infinito */

        /*Cabeçalho da versão do programa.*/
        printf("-----------------------------------");
        printf("------- Calculadora V1.0 ----------");
        printf("----------------------------------------\n\n\n");

        /*Variaveis usadas.*/
        float num1, num2, resultado;
        char escolha;
        int opcao_valida = 0;

        printf("(+)\n(-)\n(/)\n(*)\n");
        printf("Escolha uma das operacoes acima ou 'q' para sair: ");

        /* Loop para garantir que o usuário insira uma opção válida */
        while (!opcao_valida) {
            scanf(" %c", &escolha); /* Leitura do valor digitado pelo usuário */

            if (escolha == '+' || escolha == '-' || escolha == '*' || escolha == '/' || escolha == 'q') {
                opcao_valida = 1; /* Define a opção como válida e sai do loop */
            } else {
                printf("Opcao invalida. Por favor, escolha novamente: ");
            }
        }

        if (escolha == 'q') { /* Se o usuário escolher sair, o programa termina */
            break;
        }

        if (escolha != 'q') { /* Se não escolher sair, continua com a operação */
            printf("Digite dois numeros para realizar a operacao: ");
            scanf("%f %f", &num1, &num2); /* Recebendo os valores números do usuário */

            /* Funções (if) e (else if) para a realização do cálculo */
            if (escolha == '+') {
                resultado = num1 + num2;
                printf("Resultado da soma: %f\n", resultado);
            } else if (escolha == '-') {
                resultado = num1 - num2;
                printf("Resultado da subtracao: %f\n", resultado);
            } else if (escolha == '*') {
                resultado = num1 * num2;
                printf("Resultado da multiplicacao: %f\n", resultado);
            } else if (escolha == '/') {
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado da divisao: %f\n", resultado);
                } else {
                    printf("Erro: divisao por zero!\n");
                }
            }
        }
    }

    return 0;
}
