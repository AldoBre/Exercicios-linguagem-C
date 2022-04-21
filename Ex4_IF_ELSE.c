#include<stdio.h>

int main (void){

    int idade;

    printf("Qual a idade do nadador? ");
    scanf("%d",&idade);

    if( (idade >=5) && (idade<=7 )){
        printf("\n\nCategoria infantil A");
    }
    
    else if((idade >=8) && (idade<=10 )){
        printf("\n\nCategoria infantil B");
    }
    
    else if((idade >=11) && (idade<=13 )){
        printf("\n\nCategoria Juvenil A");
    }
    
    else if((idade >=14) && (idade<=17 )){
        printf("\n\nCategoria Juvenil B");
    }
    
    else if((idade >=18) && (idade<=25 )){
        printf("\n\nCategoria Senior");
    }
    else {

        printf("idade fora da faixa etária");
    }

    return(0);
}