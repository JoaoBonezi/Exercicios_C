#include <stdio.h>
int main(){
    int n1,n2;

    printf("Digite dois numeros naturais:\n");
    scanf("%d%d", &n1,&n2);

    while(n2!=0){
        int resto = n1 % n2;
        n1 = n2;
        n2 = resto;
    }
    printf("MDC: %d", n1);

    return 0;

}