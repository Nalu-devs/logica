//Calcular o fatorial de um valor lido pelo usuário. Exemplo: fatorial de 5.
//Para o cálculo: 5! = 5 x 4x 3 x 2 x 1
//Mostrar o resultado

#include <stdio.h>
#include <locale.h>
main(){
    setlocale(LC_ALL,"portuguese");
    int num, fatorial=1, i;
    printf("Digite um numero e daremos o fatorial dele: \n\n");
    scanf("%d", &num);
    if(num<0)
        printf("Calculo impossivel");
    else if(num==0)
        printf("O fatorial de 0 é: 1");
    else{
        for(i=1; i<=num; i++){
            fatorial*=i;
        }
    }
    printf("O fatorial de %d é igual a %d", num, fatorial);
}