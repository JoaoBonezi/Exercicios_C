#include <stdio.h>
int main(){
    int num;

    printf("Informe 10 valores inteiros:\n");
    
    int i;
    int maior=1,menor=1;

    for(i=0;i<=9;i++){
        scanf("%d", &num);

        if(num > maior){
            maior = num;
        }
        if(num < menor){
            menor = num;
        }
    }
    printf("Numero maior: %d\n", maior);
    printf("Numero menor: %d\n", menor);
    return 0;
}