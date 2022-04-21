#include <stdio.h>

int main (void){

    float n1,n2;

    printf("Digite um numero inteiro para N1: ");
    scanf("%f",&n1);
    printf("Digite um numero inteiro para n2: ");
    scanf("%f",&n2);

    printf(" \nO valor da soma eh: %.3f", n1+n2);
    printf(" \nO valor da subtracao eh: %.3f", n1-n2);
    printf(" \nO valor da multiplicao eh: %.3f", n1*n2);
    printf(" \nO valor da divisao eh: %.3f", n1/n2);

    return(0);


}