#include <stdio.h>
int main(){
    int num,centena,dezena,unidade;

    printf("Digite um numero de 3 digitos:\n");
    scanf("%d", &num);

    centena = num / 100; // unidade 1
    num = num % 100;
    dezena = num / 10; //unidade 2
    unidade = num % 10;//unidade 3

    if(centena > dezena && centena > unidade){
        printf("Maior digito (digito 1): %d \n", centena);
    }
    else if(dezena > centena && dezena > unidade){
        printf("Maior digito (digito 2): %d \n", dezena);
    }
    else if(unidade > centena && unidade > dezena){
        printf("Maior digito (digito 3): %d \n", unidade);
    }

    return 0;
}