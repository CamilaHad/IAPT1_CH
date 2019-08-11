#include <stdio.h>

int main()
{
    float n1, numeroacrescido;

    printf("Número: ");
    scanf("%f", &n1);

    numeroacrescido = n1*0.25+n1;

    printf("Número acrescido de 25%: %f", numeroacrescido);

    return 0;
}
