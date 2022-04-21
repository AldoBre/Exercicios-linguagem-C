#include <stdio.h>

int main (void){

float n1,n2,n3,n4;

    printf("\nDigite a primeira nota: ");
    scanf("%f",&n1);
    printf("\nDigite a segunda nota: ");
    scanf("%f",&n2);
    printf("\nDigite a terceira nota: ");
    scanf("%f",&n3);
    printf("\nDigite a quarta nota: ");
    scanf("%f",&n4);

    printf("\n\n A media eh: %.3f", (n1+n2+n3+n4)/4 );


    return(0);
}