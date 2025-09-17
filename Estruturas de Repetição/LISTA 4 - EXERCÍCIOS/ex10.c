#include <stdio.h>
int main(){
    int num,i,cont1=0,cont2=0,cont3=0,cont4=0;

    printf("Digite 15 valores inteiros:\n");
    for(i=0;i<=14;i++){
        scanf("%d", &num);
        if(num >= 0 && num <= 25){
            cont1++;
        }
        if(num > 25 && num <= 50){
            cont2 ++;
        }
        if(num > 50 && num <= 75){
            cont3++;
        }
        if(num > 75 && num <= 100){
            cont4++;
        }
        if(num > 100){
            continue;
        }
    }
    printf("Foram informados %d valores no intervalo [0,25].\n\n", cont1);
    printf("Foram informados %d valores no intervalo [25,50].\n\n ", cont2);
    printf("Foram informados %d valores no intervalo [50,75].\n\n ", cont3);
    printf("Foram informados %d valores no intervalo [75,100].\n\n ", cont4);
}