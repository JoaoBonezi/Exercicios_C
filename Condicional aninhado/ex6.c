#include <stdio.h>
int main(){
    int a,b,c,d,aux;
    int maior1,maior2,maior3,maior4;


    printf("Digite 4 numeros inteiros:\n");
    scanf("%d%d%d%d", &a,&b,&c,&d);

    maior1 = a;
    maior2 = b;
    maior3 = c;
    maior4 = d;
// usar metodo da bolha manual.
    if(maior1 > maior2){
        aux = maior1;
        maior1 = maior2;
        maior2 = aux;
    }
    if(maior1 > maior3){
        aux = maior1;
        maior1 = maior3;
        maior3 = aux;
    }
    if(maior1 > maior4){
        aux = maior1;
        maior1 = maior4;
        maior4 = aux;
    }
    if(maior2 > maior3){
        aux = maior2;
        maior2 = maior3;
        maior3 = aux;
    }
    if(maior2 > maior4){
        aux = maior2;
        maior2 = maior4;
        maior4 = aux;
    }
    if(maior3 > maior4){
        aux = maior3;
        maior3 = maior4;
        maior4 = aux;
    }
        printf("Valores em ordem crescente: %d %d %d", maior2,maior3,maior4);
    

    return 0;
}