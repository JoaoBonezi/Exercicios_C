#include<stdio.h>
int main(){
    int num,centena,dezena,unidade,unidade2;

    printf("Digite um numero inteiro de 3 digitos:\n");
    scanf("%d", &num);

    centena = num / 100; // unidade 1
    num = num % 100; // unidade 2
    unidade = num /10;
    unidade2 = num % 10;

    printf("Digitos separados: digito 1: %d digito2: %d digito3: %d \n", centena,unidade,unidade2);

}