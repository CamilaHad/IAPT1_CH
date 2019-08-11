#include <stdio.h>

int main()
{
    int ano, idade;

    printf("Ano de nascimento: ");
    scanf("%d", &ano);

    idade = 2019 - ano;

    printf("Idade em 2019: %d",idade);

    return 0;
}
