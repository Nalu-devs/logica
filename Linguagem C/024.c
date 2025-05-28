//Solicitar a idade de várias pessoas e imprimir: Quantidade de pessoas
//com menos de 21 anos. Quantidade de pessoas com mais de 50 anos. O
//programa termina quando idade digitada for -99

#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"portuguese");
    int idade, idade21=0, idade50=0;
    printf("\t\tPrograma idades\n\n");
    do{
        printf("Digite sua idade ou -99 para encerrar:\n");
        scanf("%d",&idade);
        do{
            if (idade==-99){
                break;
            }        
            else if(idade<0){
                printf("Não existe idade negativa digite novamente\n");
            }
            else if(idade<=21){
                idade21++;
            }
            else if(idade>50){
                idade50++;
            }
        }while(idade==-99);
    }while(idade!=-99);
    printf("A quantidade de pessoas com menos de 21 anos é: %d e a quantidade de pessoas com mais de 50 é: %d", idade21, idade50);
}