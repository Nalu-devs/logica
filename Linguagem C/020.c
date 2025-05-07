#include <stdio.h>
main(){
    char nome[40], situ[20];
    float peso, altura, imc;
    printf("Digite seu nome: \n");
    scanf("%s",nome);
    printf("Digite seu peso: \n");
    scanf("%f",&peso);
    printf("Digite sua altura: \n");
    scanf("%f",&altura);
    imc=peso/(altura^^2);
    if (imc<=18){
        situ="Baixo peso";
    }
    else if(imc>18 && imc<=24){
        situ="Normal";
    }
    else{
        situ="Obeso";
    }
    printf("%s sua situação é: %s",nome, situ);
}
