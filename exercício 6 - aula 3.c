#include <stdio.h>

int main()
{
    float base, altura, area;

    printf("Digite a base do tri�ngulo: ");
    scanf("%f", &base);

    printf("Digite a altura do tri�ngulo: ");
    scanf("%f", &altura);

    area = base*altura/2;

    printf("A �rea do tri�ngulo �: %f", area);

    return 0;
}
