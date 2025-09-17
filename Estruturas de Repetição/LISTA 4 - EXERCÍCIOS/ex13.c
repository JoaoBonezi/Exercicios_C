#include <stdio.h>
int main(){
    int num,i,soma,cont=0;

    printf("Digite 15 numeros para verificar a media dos numeors impares:\n");

    for(i=0;i<=14;i++){
        scanf("%d", &num);

        if(num % 2 != 0){
            cont++;
            soma = soma + num;
        }
    }
    int media = soma / cont;
    printf("A media dos numeros impares eh %d.\n", media);
}