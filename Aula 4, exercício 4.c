#include <stdio.h>

/* Aula 4, exercício 4 - agosto/19 */

int main()
{
    //declare

    float  pes, polegadas, jardas, milhas;

    printf("Digite uma medida em pes: ");
    scanf("%f", &pes);

    polegadas = pes * 12;
    jardas = pes / 3;
    milhas = jardas / 1760;

    printf("\n%f pes corresponde a %f polegadas", pes, polegadas);
    printf("\n%f pes corresponde a %f jardas", pes, jardas);
    printf("\n%f pes corresponde a %f milhas\n\n",pes, milhas);

    return 0;
}
