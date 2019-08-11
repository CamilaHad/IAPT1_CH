#include <stdio.h>

int main()
{
    float bruto, liquido, imposto;

    printf("Salário bruto: ");
    scanf("%f", &bruto);

    imposto = bruto*0.1;
    liquido = (bruto-imposto)+50;

    printf("Salário líquido: %f", liquido);

    return 0;
}
