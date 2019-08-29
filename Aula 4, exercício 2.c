#include <stdio.h>

/* Aula 4, exercício 2 - agosto/19 */

int main()
{
    //declare
    int n1, n2, n3, mult;

    printf("Digite o 1o numero: \n");
    scanf("%d", &n1);

    printf("Digite o 2o numero: \n");
    scanf("%d", &n2);

    printf("Digite o 3o numero: \n");
    scanf("%d", &n3);

    mult = n1 * n2 * n3;

    printf("O resultado e: %d", mult);

    return 0;
}
