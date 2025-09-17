#include <stdio.h>
int main(){
    int num,i;
    long long fatorial=1;

    printf("Digite um numero inteiro para sabe seu fatorial:\n");
    scanf("%d", &num);

    for(i=1;i<=num;i++){
        fatorial*=i;
    }
    printf("O fatorial do numero !%d eh %lld.\n ", num,fatorial);
}