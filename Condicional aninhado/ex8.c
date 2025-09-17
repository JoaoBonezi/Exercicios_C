#include <stdio.h>
int main(){
    int n1,n2,n3,n4,n5,n6;
    int soma = 0;

    printf("Digite seis numeros inteiros:\n");
    scanf("%d%d%d%d%d%d", &n1,&n2,&n3,&n4,&n5,&n6);

    if(n1 % 2 == 0){
        soma+=n1;
    }
    if(n2 % 2 == 0){
        soma+=n2;
    }
    if(n3 % 2 == 0){
        soma+=n3;
    }
    if(n4 % 2 == 0){
        soma+=n4;
    }
    if(n5 % 2 == 0){
        soma+=n5;
    }
    if(n6 % 2 == 0){
        soma+=n6;
    }

    printf("A soma dos numeros pares eh: %d.", soma);
}