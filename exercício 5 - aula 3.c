#include <stdio.h>

int main()
{
    float bruto, liquido, imposto;

    printf("Sal�rio bruto: ");
    scanf("%f", &bruto);

    imposto = bruto*0.1;
    liquido = (bruto-imposto)+50;

    printf("Sal�rio l�quido: %f", liquido);

    return 0;
}
