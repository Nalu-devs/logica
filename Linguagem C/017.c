//Gerar a tabuada de um valor solicitado pelo usuário e verificar se ele deseja novo cálculo de tabuada

#include <stdio.h>
main(){
    int num,i,res;
    char op;
    do{
        printf("\t\t Digite o número para a tabuada");
        scanf("%d",&num);    
        for(i=0;i<=10;i++){
            res=num*i;
            printf("%d X %d = %d \n",num,i,res);
        }
        printf("Digite ! para nova tabuada");
        scanf("%c",&op);
    }while(op=='!');
}