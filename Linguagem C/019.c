#include <stdio.h>
main(){
    char nome[40];
    int quant;
    float preco, totalPag, pagFinal, desconto;
    printf("Digite o nome do produto");
    scanf("%s",nome);
    printf("Digite o valor unitario do produto");
    scanf("%f",&preco);
    do{
        printf("Digite a quantidade adquirida");
        scanf("%d",quant);
    }while(quant>50);
    totalPag=quant*preco;
    if (quant<=20){
        desconto=totalPag*0.02;
    }
    else if (quant>20){
        desconto=totalPag*0.05;
    }
    pagFinal=total-desconto;
    printf("O produto %s tem preco unitario de %2.f e a quantidade adiquirida foi %d o valor final sera de %2.f",nome, totalPag, quant, pagFinal);
}