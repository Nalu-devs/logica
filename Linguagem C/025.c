//Escrever um programa que receba vários números inteiros no teclado. E
//no final imprimir a média dos números múltiplos de 3. Para sair digitar 0
//(zero)

#include <stdio.h>
#include <locale.h>
main(){
    setlocale(LC_ALL, "portuguese");
    int num;
    float media=0, soma=0, cont=0;
    printf("Digite numeros inteiros ou 0 para sair: \n\n");
    do{
        scanf("%d", &num);
        if(num%3==0 && num!=0){
            soma+=num;
            cont++;
        }
    }while(num!=0);
    media=soma/cont;
    printf("A média dos valores digitados é: %2.f",media);
}