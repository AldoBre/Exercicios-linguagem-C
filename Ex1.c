#include <stdio.h>

int main(void){

    int n1;
    float n2;

    printf("Digite o valor inteiro para n1: ");
    scanf("%d",&n1);
    printf("\nDigite o valor real para n2: ");
    scanf("%f",&n2);

    printf("N1 eh %05d e N2 eh %.3f",n1,n2);

    return (0);
}