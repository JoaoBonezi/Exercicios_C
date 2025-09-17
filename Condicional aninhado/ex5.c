#include <stdio.h>
int main(){
    int a,b,c,aux,i;

    printf("Digite 3 numeros inteiros: \n");
    scanf("%d%d%d", &a,&b,&c);

    printf("Digite o valor de i (1 a 3):\n");
    scanf("%d", &i);

    if(i == 1){
        if(a>b){
            aux = a;
            a=b;
            b=aux;
        }
        if(a>c){
            aux=a;
            a=c;
            c=aux;
        }
        if(b>c){
            aux=b;
            b=c;
            c=aux;
        }
        printf("Valores em ordem crescente: %d %d %d", a,b,c);
    }
    if(i == 2){
         if(a<b){
            aux = a;
            a=b;
            b=aux;
        }
        if(a<c){
            aux=a;
            a=c;
            c=aux;
        }
        if(b<c){
            aux=b;
            b=c;
            c=aux;
        }
        printf("Valores em ordem descrescente: %d %d %d", a,b,c);
    }
    if(i == 3){
        if(a > b && a > c){
            printf("Maior valors no meio: %d %d %d", b,a,c);
        }
        if(b>a && b > c){
            printf("Maior valors no meio: %d %d %d", a,b,c);
        }
        if(c>a&&c>b){
            printf("Maior valors no meio: %d %d %d", a,c,b);
        }
    }
}