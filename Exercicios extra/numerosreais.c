#include <stdio.h>
int main(){
    float n1,n2;
    float soma;

    printf("Digite dois valores reais:\n");
    scanf("%f%f", &n1,&n2);

    if(n1 > n2){
        soma = n1 - n2;
        printf("A diferenca dos numeros eh: %.2f - %.2f =%.2f", n1,n2,soma);
    }
    else if(n2>n1){
        soma = n2 - n1;
        printf("A diferenca dos numeros eh: %.2f - %.2f = %.2f", n2,n1,soma);
    }
    return 0;
}