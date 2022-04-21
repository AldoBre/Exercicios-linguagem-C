#include <stdio.h>

int main (void){

    int n1,n2,n3,n4;

    printf("\nDigite a primeira nota: ");
    scanf("%d",&n1);
    printf("\nDigite a segunda nota: ");
    scanf("%d",&n2);
    printf("\nDigite a terceira nota: ");
    scanf("%d",&n3);
    printf("\nDigite a quarta nota: ");
    scanf("%d",&n4);

    printf("\n\n A media eh: %03d", (n1+n2+n3+n4)/4 );


    return(0);
}