#include <stdio.h>
int main(){
    int horas,minutos;

    printf("Digite as horas e minutos:\n");
    scanf("%d%d", &horas,&minutos);

    if(horas <=23){
        if(minutos <=59){
            printf("Aprovado!");
        }
        else{
            printf("Negado!\n");
        }
    }
    else{
        printf("Negado!");
    }
    return 0;
}