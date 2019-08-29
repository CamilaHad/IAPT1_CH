#include <stdio.h>

/* Aula 4, exercício 3 - agosto/19 */

int main()
{
    //declare
    float peso, engorda, emagrece;

    printf("Digite o peso: ");
    scanf("%f", &peso);

    engorda = peso * 1.15;

    emagrece = peso * 0.8;

    printf("\nPeso engordando 15 por cento: %.2f", engorda);
    printf("\nPeso emagrecendo 20 por cento: %.1f", emagrece);

    return 0;
}
