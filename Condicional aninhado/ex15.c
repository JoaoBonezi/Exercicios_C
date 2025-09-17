#include <stdio.h>
int main(){
    int matricula;
    float n1,n2,n3,media=0;

    printf("Digite o numero da sua matricula:\n");
    scanf("%d", &matricula);

    printf("Digite as notas das provas: \n");
    scanf("%f%f%ef", &n1,&n2,&n3);


    if(n1 > n2 && n1 > n3 ){
        media= (n1 + n2 + n3)/3;
        printf("Numero de matricula: %d\n", matricula);
        printf("Media: %.2f \n", media);
        
        if(media >= 6){
            printf("Aprovado!\n");
        }else{
            printf("Reprovado!\n");
        }
    }
    else if(n2 > n1 && n2 > n3 ){
        media= (n1 + n2 + n3)/3;
        printf("Numero de matricula: %d\n", matricula);
        printf("Media: %.2f \n", media);
        
        if(media >= 6){
            printf("Aprovado!\n");
        }else{
            printf("Reprovado!\n");
        }
    }

    else if (n3 > n1 && n3 > n2 ){
        media= (n1 + n2 + n3)/3;
        printf("Numero de matricula: %d\n", matricula);
        printf("Media: %.2f \n", media);
        
        if(media >= 6){
            printf("Aprovado!\n");
        }else{
            printf("Reprovado!\n");
        }
    }
    return 0;
}