#include <stdio.h>

/* Aula 4, exercício 8 - agosto/19 */

int main()
{
    float distancia, tempo;

    printf("Digite a distancia (em km): ");
    scanf("%f", &distancia);

    tempo = distancia * 2;

    printf("\nO tempo necessario para o carro y tomar a distancia %.1f km e: %.0f minutos\n", distancia, tempo);

    return 0;
}
