#include <stdio.h>
int main(){
    int i,num,cont=0;

    printf("Digite 15 numeros inteiros:\n");

    for(i=0;i<=14;i++){
        scanf("%d", &num);
        if(num >=10 && num <=20){
            cont++;
        }
    }
    printf("Foram digitados %d valores no intervalo de [10,20].", cont);
}