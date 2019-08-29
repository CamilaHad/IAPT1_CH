#include <stdio.h>

/* Aula 4, exercício 6 - agosto/19 */

int main()
{
    float salario, conta1, conta2, multa1, multa2, resto;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    printf("Digite o valor da 1a conta: ");
    scanf("%f", &conta1);

    printf("Digite o valor da 2a conta: ");
    scanf("%f", &conta2);

    multa1 = conta1 * 1.02;
    multa2 = conta2 * 1.02;
    resto = salario - multa1 - multa2;

    printf("O restante do salario e: %.2f", resto);

    return 0;
}
