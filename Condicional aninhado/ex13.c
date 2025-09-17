#include <stdio.h>
int main(){
    int matricula;
    float n1,n2,n3,exercicio,media=0;

    printf("Digite o numero da sua matricula:\n");
    scanf("%d", &matricula);

    printf("Digite as notas das provas: \n");
    scanf("%f%f%f", &n1,&n2,&n3);

    printf("Digite a nota dos exercicios:\n");
    scanf("%f", &exercicio);

    media = (n1+2*n2+3*n3+4*exercicio) / 10;
    printf("Notas do aluno: %.2f, %.2f e %.2f\n", n1,n2,n3);
    if(media >= 9){
        printf("Media: %.2f\n", media);
        printf("Conceito: A\n");
    }
    else if(media >= 7.5 && media < 9){
        printf("Media: %.2f\n", media);
        printf("Conceito: B\n");
    }
    else if(media >= 6.0 && media < 7.5){
        printf("Media: %.2f\n", media);
        printf("Conceito: C\n");
    }
    else if(media >= 4.0 && media < 6){
        printf("Media: %.2f\n", media);
        printf("Conceito: D\n");
    }
    else if(media < 4){
        printf("Media: %.2f\n", media);
        printf("Conceito: E\n");
    }

    return 0;



}