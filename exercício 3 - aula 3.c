#include <stdio.h>

int main()
{
    float n1, numeroacrescido;

    printf("N�mero: ");
    scanf("%f", &n1);

    numeroacrescido = n1*0.25+n1;

    printf("N�mero acrescido de 25%: %f", numeroacrescido);

    return 0;
}
