#include <stdio.h>
int main(){
    int i=0;
    int num;
    int soma;

    for(i=1;i<=3;i++){
        printf("informe um numero:\n");
        scanf("%d", &num);
        
        if(num < 0){
            i--; //tirando um a volta do looping.
            continue;
        }
        soma = soma + num;

    }
    printf("\n%d\n", soma);    
    
}