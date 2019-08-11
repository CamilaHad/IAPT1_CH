#include <stdio.h>

int main ()
{
    int n1, n2, n3, media;

    printf("Primeiro número: ");
    scanf("%d", &n1);

    printf("Segundo número: ");
    scanf ("%d", &n2);

    printf("Terceiro número: ");
    scanf("%d", &n3);

    media = (n1 + n2 + n3)/3;

    printf("Média aritmética: %d", media);

    return 0;
}
