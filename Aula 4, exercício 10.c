#include <stdio.h>

/* Aula 4, exercício 10 - agosto/19 */

int main()
{
    int idade, ano, mes, dia, n_idade;

    printf("Digite a idade (em dias)");
    scanf("%d", &idade);

    ano = idade / 360;
    n_idade = idade - ano * 360;
    mes = n_idade / 30;
    dia = n_idade - mes * 30;

    printf("\nIdade %d:\n", idade);
    printf("\n%d ano(s)", ano);
    printf("\n%d mes(es)", mes);
    printf("\n%d dia(s)\n", dia);

    return 0;
}
