#include <stdio.h>

/* Aula 4, exercício 7 - agosto/19 */

int main()
{
    float tempo, vel_media, distancia, litros;

    printf("Digite o tempo gasto para a viagem: ");
    scanf("%f", &tempo);

    printf("Digite a velocidade media: ");
    scanf("%f", &vel_media);

    distancia = tempo * vel_media;
    litros = distancia / 12;

    printf("A quantidade de litros consumidos foi de: %.2f", litros);

    return 0;
}
