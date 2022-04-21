#include<stdio.h>

int main (void){

    float n1,n2,n3, media;

    printf("Digite a primeira nota: ");
    scanf("%f",&n1);

    printf("Digite a segunda nota: ");
    scanf("%f",&n2);
    
    printf("Digite a terceira nota: ");
    scanf("%f",&n3);

    media = (n1+n2+n3)/3;

    if(media >= 7){
        printf("Aluno Aprovado");
    }
    
    else if(media <= 4){
        printf("Aluno reprovado");
    }

    else if( (media >= 4.1) || (media <= 6.9 ) ){
        printf("Aluno em exame");
    }



    return(0);
}