#include <stdio.h>
int main(){
    int num,centena,dezena,unidade;

    printf("Digite um numero de 3 digitos:\n");
    scanf("%d", &num);

    centena = num /100;
    num = num % 100; //separa os ultimos dois digitos
    dezena = num / 10;
    unidade = num % 10;

    if(centena == unidade){
        printf(" %d eh um numero polindromo!\n", num);
    }else{
        printf("Nao eh um numero polindromo.\n");
    }

    return 0;
}