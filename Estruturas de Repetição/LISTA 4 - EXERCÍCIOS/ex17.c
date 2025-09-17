#include <stdio.h>
int main(){
    int num,fatorial = 1;

    printf("Digie 10 numeros menores que 20 para saber o fatorial:\n");

    int i,j=0;
    
    for(i=0;i<=9;i++){
        scanf("%d", &num);
        if(num > 20){
            printf("Numero muito grande continue.\n");
            i--; //refaz a entrada;
            continue;
        }
        fatorial = 1;
        for(j=1;j<=num;j++){
            fatorial *= j;
        }
        printf("Numero: %d  Fatorial: %d\n", num,fatorial);
    }

    return 0;
}
    
