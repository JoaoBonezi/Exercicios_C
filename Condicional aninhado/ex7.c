#include <stdio.h>
int main(){
    int a,b,c,d;
    int maior1,maior2,maior3;

    printf("Digite 4 numeros inteiros: \n");
    scanf("%d%d%d%d", &a,&b,&c,&d);

    maior1 = a;
    maior2 = b;
    maior3 = c;

    if(maior1 < maior2){
        int aux = maior1;
            maior1=maior2;
            maior2=maior2;
    }
    if(maior1 < maior3){
        int aux = maior1;
        maior1 = maior3;
        maior3 = aux;
    }
    if(maior2<maior3){
        int aux = maior2;
        maior2 = maior3;
        maior3 = aux;
    }

    if(d< maior1){
        maior3=maior2;
        maior2=maior1;
        maior1=d;
    }
    else if(d<maior2){
        maior2=maior1;
        maior1=d;
    }
    else if(d<maior3){
        maior1 = d;
    }

    printf("Numeros em ordem descrescente: %d %d %d", maior3, maior2, maior1);

    return 0;
}