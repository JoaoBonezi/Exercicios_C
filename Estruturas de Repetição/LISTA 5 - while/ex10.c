// Programa que lê matricula, tres notas + nt recuperação se necessario media menor que 6 pega rp. 
#include <stdio.h>
int main(){
    int matricula;
    float nt1,nt2,nt3;
    float menor=0;
    float recuperacao=0;
    float media = 0;

    printf("Digite o numero da sua matricula: \n");
    scanf("%d", &matricula);

    while(matricula != 0){

        printf("Digite suas notas (3 notas):\n");
        scanf("%f%f%f", &nt1,&nt2,&nt3);
        if(nt1 == 0 || nt2 == 0 || nt3 == 0){
            media = 0;
        }

        media = 3.0/((1.0/nt1)+(1.0/nt2)+(1.0/nt3));

        //menor nota:
        menor = nt1;
        if(nt2<menor){
            menor = nt2;
        }
        else if(nt3<menor){
            menor = nt3;
        }

        if(menor == nt1){
            media = 3.0/((1.0/10.0)+(1.0/nt2)+(1.0/nt3));
        }
        else if(menor == nt2){
            media = 3.0/((1.0/nt1)+(1.0/10.0)+(1.0/nt3));
        }
        else if(menor == nt3){
           media = 3.0/((1.0/nt1)+(1.0/nt2)+(1.0/10.0));
        }

        if(media < 6){
            printf("Numero da matricula: %d\n", matricula);
            printf("Media: %.2f\n", media);
            printf("Conceito 0 [REPROVADO]\n");
        }
        else if(media >= 6){
                printf("Qual sua nota da recuperação:\n");
                scanf("%f", &recuperacao);
                if(menor == nt1){
                    media = 3.0/((1.0/recuperacao)+(1.0/nt2)+(1.0/nt3));
                }
                else if(menor == nt2){
                   media = 3.0/((1.0/nt1)+(1.0/recuperacao)+(1.0/nt3));
                }
                else{
                    media = 3.0/((1.0/nt1)+(1.0/nt2)+(1.0/recuperacao));
                }
            }
        printf("\nNumero de matricula: %d\n", matricula);
        if(media < 6){
            printf("Media: %.2f\n", media);
            printf("Conceito '0' \n");
        }
        else if(media >= 6 && media<7){
            printf("Media: %.2f\n", media);
            printf("Conceito '1'\n");
        }
        else if(media >= 7 && media < 8){
            printf("Media: %.2f\n", media);
            printf("Conceito: '2'\n");
        }
        else if(media >=8 && media <=9){
            printf("Mediad: %.2f\n", media);
            printf("Conceito '3'\n");
        }
        else{
            printf("Media: %.2f\n", media);
            printf("Conceito: '4'\n");
        }
        printf("\nDigite a matricula do proximo aluno (0 para sair): ");
        scanf("%d", &matricula);
    }
    return 0;
}