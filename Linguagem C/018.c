//Calcular a média e determinar a classificação de notas dos alunos:
//Se média entre : 8 e 10, classificação “A”; 
//Se média entre: 7 e 7,9, classificação “B”; 
//Se média entre: 5 e 6,9, classificação “C”; 
//Se média abaixo de 5, classificação “D”. 
//Mostrar como resultado: nome aluno, média, classificação

#include <stdio.h>
main(){
    char nome[40], op, clas;
    float n1,n2,n3,n4, media;
    printf("\t\t\tCalculo de situação\n\n");
    do{
        printf("Digite o nome do aluno(a): \n");
        scanf("%s",nome);
        do{
            printf("Digite as quatro notas: \n");
            scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
        }while(n1>10 || n1<0 || n2>10||n2<0 || n3>10||n3<0 || n4>10||n4<0);
        media=(n1+n2+n3+n4)/4;
        if (media>=8 && media<=10){
            clas='A';
        }
        else if (media>=7 && media<=7.9){
            clas='B';
        }
        else if (media>=5 && media<=6.9){
            clas='C';
        }
        else{
            clas='D';
        }
        printf("O(A) aluno(a): %s obteve media: %2.f e sua classificação é %c \n",nome,media,clas);
        printf("Deseja calcular de outro aluno? (s/n)");
        scanf("%c",&op);
    }while(op=='s' || op=='S');
}