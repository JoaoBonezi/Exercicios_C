#include <stdio.h>
int main(){
    int n1,n2,n3,aux;
    

    printf("Digite tres numeros inteiros:\n");
    scanf("%d%d%d", &n1,&n2,&n3);

    if(n1>n2){
        aux = n1;
        n1=n2;
        n2=aux;
    }
    else if(n1>n3){
        aux = n1;
        n1=n3;
        n3=aux;
    }
    else if(n2>n3){
        aux = n2;
        n2=n3;
        n3 =aux;
    }

    printf("Ordem crecente: %d %d %d", n1,n2,n3);
}