#include <stdio.h>

int main()
{
    int n1, n2, soma;

    printf("Primeiro número: ");
    scanf("%d", &n1);
    printf("Segundo número: ");
    scanf("%d", &n2);

    soma = n1 + n2;

    printf("Resultado: %d", soma);

    return 0;
}
