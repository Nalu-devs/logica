//Fazer um programa no qual o usuário vai entrando sucessivamente com
//valores positivos. Quando o usuário entrar com um valor negativo o
//programa para de pedir valores e calcula a média dos valores já
//fornecidos.

#include <stdio.h>
#include <locale.h>
main(){
    setlocale(LC_ALL,"portuguese");
    int num;
    float media=0, soma=0, cont=0;
    printf("Digite diversos valores positivos ou um negativo para encerrar:\n\n");
    do{
        scanf("%d", &num);
        if(num>0){
            soma+=num;
            cont++;
        }
    }while(num>0);
    media=soma/cont;
    printf("A media dos valores digitador é: %f", media);
}