#include <stdio.h>

/* Aula 4, exercício 5 - agosto/19 */

int main()
{
    float alturadegrau, alturadesejada, degraus;

    printf("Digite a altura do degrau (em metros): ");
    scanf("%f", &alturadegrau);

    printf("Digite a altura desejada (em metros): ");
    scanf("%f", &alturadesejada);

    degraus = alturadesejada / alturadegrau;

    printf("Precisa subir: %.2f degraus", degraus);

    return 0;

}
