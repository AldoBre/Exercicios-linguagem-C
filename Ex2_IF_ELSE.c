#include<stdio.h>

int main(void){

int idade;

printf("Qual a idade o eleitor? ");
scanf("%d",&idade);

if(idade >= 16){
    printf("\n\nPode Votar!");
}
else{
    printf("\n\nNao pode votar!!");
}



    return(0);
}