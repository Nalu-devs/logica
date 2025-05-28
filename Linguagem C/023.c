//Escrever um programa que leia uma sequência de valores inteiros, até ser
//lido o valor -99. Quando isso acontecer o programa deverá mostrar a soma e a média dos valores lidos.

#include <stdio.h>
#include <locale.h>
main(){
    setlocale(LC_ALL,"portuguese");
    int num;
    float media=0, soma=0, cont=0;
    printf("\t\tSequencia de valores inteiros:\n\n");
    do{
        printf("Digite uma sequencia de valores ou -99 para sair: \n");
        scanf("%d", &num);
        if(num!=-99){
            soma+=num;
            cont++;
        }

    }while(num!=-99);
    media=soma/cont;
    printf("A soma dos valores lidos é: %f e a media é igual a: %f", soma, media);
}