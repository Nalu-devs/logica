//Programa que calcule a divisão de um numero pelo outro, sabendo que o quociente tem que ser diferente de 0

#include <stdio.h>
#include <locale.h>
main(){
    setlocale(LC_ALL,"portuguese");
    float num1, num2, divisao;
    printf("Digite um numero:\n\n");
    scanf("%f",&num1);
    printf("Digite outro numero:\n\n");
    do{
    scanf("%f",&num2);
    printf("Digite um numero diferente de 0\n");
    }while(num2<=0);
    divisao=num1/num2;
    printf("A divisão de %2.f e %2.f é igual a %2.f", num1, num2, divisao);
}