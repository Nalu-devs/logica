#include <stdio.h>
#include <locale.h>
main (){
    setlocale(LC_ALL, "portuguese");
    char produto[30], op;
    float pr, vp, pd;
    int qt, pa, tp;
    printf("\t\t Calcula forma de pagamento \n\n");
    do{
        printf("Digite o nome do produto: \n");
        scanf("%s",&produto);
        printf("Qual o preço de %s:", produto);
        scanf("%f",&pr);
        printf("Digite a quantidade de %s:", produto);
        scanf("%d", &qt);
        vp=pr*qt;
        do{
            printf("Forma de pagamento \n\n 1 A vista com 15 porcento de desconto \n 2 ate 5 vezes sem juros \n até 10 vezes com 10 porcento de juros \n \n");
            printf("Forma");
            scanf("%d", &tp);
        }while(tp<1 || tp>3);
        if (tp==1){
            pd=vp*0.85;
            printf(" produto %s com preço final de R$ %.2f teve 15 de desconto e pagara R$%.2f\n\n", produto, vp,pd);
        }
        else if(tp==2){
            do{
                printf("Quantas parcelas");
                scanf("%d", &pa);
            }while(pa<1 || pa>5);
            pd=vp/pa;
            printf("O produto %s com preço final de R$ %.2f pagara %d parcelas de R$ %.2f\n\n", produto, vp, pa, pd);
        }
        else{
            do{
                printf("Digite o numero de parcelas");
                scanf("%d",&pa);
            }while(pa<1 || pa>10);
            vp = vp*1.10;
            pd = pd/pa;
            printf("O  produto %s com preço final de R$ %.2f pagara %d parcelas de R$ %.2f\n\n", produto, vp, pa, pd);
        }
        fflush(stdin);
        printf("Digite ! para novo calculo");
        scanf("%c",&op);
    }while(op=='!');
}