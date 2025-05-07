#include <stdio.h>
main(){
    char nome[40];
    float salFixo, valorV, comi, salFinal;
    printf("Digite seu nome: \n");
    scanf("%s",nome);
    printf("Digite seu salario fixo: \n");
    scanf("%f",&salFixo);
    printf("Digite o valor de suas vendas no mes: \n");
    scanf("%f",&valorV);
    if (valorV<=2000){
        comi=valorV*0.03;
    }
    else if(valorV>2000 && valorV<=5000){
        comi=valorV*0.05;
    }
    else{
        comi=valorV*0.1;
    }
    salFinal=salFixo+comi;
    printf("%s irá receber %f", nome, salFinal);
}