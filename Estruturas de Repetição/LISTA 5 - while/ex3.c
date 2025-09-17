#include <stdio.h>
int main(){
    int num=0,qtd=0,i=1;
    int menor;
    printf("Digite 20 numeros inteiros:\n");
    do{
        scanf("%d", &num);
        
        if(num < menor){
            menor = num;
        }
        if(menor == num){
            qtd++;
        }
        i++;
    } while(i<=20);

    printf("Menor numero: %d\n", menor);
    printf("Menor numero se repetiu %d vezes.", qtd);

    return 0;
}