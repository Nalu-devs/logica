//Ler os valores para nome, peso e altura de uma pessoa e calcule o seu IMC (índice de massa corpórea), pela fórmula:
//IMC = peso/(altura2) Escrever o nome da pessoa, seu imc e sua classificação de acordo com a tabela:
//Se o resultado do IMC for até 18, escrever “baixo peso” 
//Se for maior que 18 e menor igual a 24, escrever “normal”
//Se for maior que 24, escrever ‘Obeso’.

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
