#include <stdio.h>
int main(){
    int num;
    do{
        printf("Digite um numero (1 a 7) e diremos o dia da semana para você \n");
        scanf("%d",&num);
        printf("Valor inválido \n");
    }while(num>7);
    if (num==1){
        printf("O dia da semana é: Domingo");
    }
    else if (num==2){
        printf("O dia da semana é: Segunda");
    }
    else if(num==3){
        printf("O dia da semana é: Terça");
    }
    else if(num==4){
        printf("O dia da semana é: Quarta");
    }
    else if(num==5){
        printf("O dia da semana é: Quinta");
    }
    else if(num==6){
        printf("O dia da semana é: Sexta");
    }
    else if(num==7){
        printf("O dia da semana é: Sábado");
    }
}