#include <stdio.h>

int main(void)
{

    int idade;
    float altura;

    printf("Qual a idade da pessoa? ");
    scanf("%d", &idade);
    printf("\nQual a altura da pessoa? ");
    scanf("%f", &altura);

    if ((idade >= 16) && (altura >= 1.75))
    {
        printf("Pode Competir!!!!");
    }
    else
    {
        printf("nao pode competir :( ");
    }

    return (0);
}