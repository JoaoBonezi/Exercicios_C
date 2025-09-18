#include <stdio.h>
int main(){
    int divisor=2,num;

    printf("Digite um numero para saber seu fatorial:\n");
    scanf("%d", &num);
    
    while(num > 1){
        if(num % divisor == 0){
            printf("%d", divisor);
            num = num / divisor;
        
            if(num > 1){
                printf(" X ");
            }
        
        }
            else{
                divisor++;
            }
    }   
    printf("\n");

    return 0;
    
}