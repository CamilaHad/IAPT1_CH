#include <stdio.h>

int main ()
{
    int n1, n2, n3, media;

    printf("Primeiro n�mero: ");
    scanf("%d", &n1);

    printf("Segundo n�mero: ");
    scanf ("%d", &n2);

    printf("Terceiro n�mero: ");
    scanf("%d", &n3);

    media = (n1 + n2 + n3)/3;

    printf("M�dia aritm�tica: %d", media);

    return 0;
}
