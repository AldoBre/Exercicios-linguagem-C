#include <stdio.h>

int main (void){

    int n1,n2;

    printf("Digite um numero inteiro para N1: ");
    scanf("%d",&n1);
    printf("Digite um numero inteiro para n2: ");
    scanf("%d",&n2);

    printf(" \nO valor da soma eh: %04d", n1+n2);
    printf(" \nO valor da subtracao eh: %04d", n1-n2);
    printf(" \nO valor da multiplicao eh: %04d", n1*n2);
    printf(" \nO valor da divisao eh: %04d", n1/n2);

    return(0);


}