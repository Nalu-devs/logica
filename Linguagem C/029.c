//Faça um algoritmo que gere valores de 1 a 100 e calcule e escreva a
//média aritmética dos valores gerados.

#include <stdio.h>
#include <locale.h>
main(){
    setlocale(LC_ALL,"portuguese");
    int i;
    float media=0, soma=0;
    for(i=1; i<=100; i++){
        soma+=i;   
    }
    media=soma/100;
    printf("A media dos valores de 1 a 100 é: %2.f", media);
}