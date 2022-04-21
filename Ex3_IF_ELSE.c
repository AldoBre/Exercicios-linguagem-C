#include<stdio.h>

int main(void){

    int nivel;
    float horas;

    printf("\nQuantas horas o professor trabalhou? ");
    scanf("%f",&horas);
    printf("\nQual o nivel do professor? ");
    scanf("%d",&nivel);

    if(nivel == 1){
        printf("O salario do professor foi R$%.2f", horas*12);
    }
    else if(nivel == 2){
        printf("O salario do professor foi R$%.2f", horas*17);
    }
    else if(nivel == 3){
        printf("O salario do professor foi R$%2.f", horas*25);
    }
    return(0);
}