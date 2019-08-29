#include <stdio.h>

/* Aula 4, exercício 9 - agosto/19 */

int main()
{
    int valor, n100, n50, n20, n10, n5, n2, n1;

    printf("Digite o valor: ");
    scanf("%d", &valor);

    n100 = valor / 100;
    valor = valor - n100 * 100;
    n50 = valor / 50;
    valor = valor - n50 * 50;
    n20 = valor / 20;
    valor = valor - n20 * 20;
    n10 = valor / 10;
    valor = valor - n10 * 10;
    n5 = valor / 5;
    valor = valor - n5 * 5;
    n2 = valor / 2;
    valor = valor - n2 * 2;
    n1 = valor / 1;

    printf("\nAs notas necessárias são:\n");
    printf("%d notas de R$100\n", n100);
    printf("%d notas de R$50\n", n50);
    printf("%d notas de R$20\n", n20);
    printf("%d notas de R$10\n", n10);
    printf("%d notas de R$5\n", n5);
    printf("%d notas de R$2\n", n2);
    printf("%d notas de R$1\n", n1);

    return 0;
}
