#include <stdio.h>
int main(){
    int n1,n2;

    do{
        printf("Digite dois numeros inteiros entre (1 e 500) para saber o (mmc):\n");
        scanf("%d%d", &n1,&n2);  

        if(n1 >= 500 || n1 <= 0 || n2 >=500 || n2 <= 0){
            printf("Numeros invalidos digite novamente! Numeros de (1 a 500).\n");
       }
    } while (n1 >= 500 || n1 <= 0 || n2 >=500 || n2 <= 0);

    int a,b;
        a=n1;
        b=n2;

    while (n2 != 0)
        {
            int resto = n1 % n2;
            n1 = n2;
            n2 = resto;
        }

    int mmc = 0;
    int mdc;

    mdc = n1;
    mmc = (a * b) / mdc;

    printf("O MMC do numero eh: %d", mmc);
    
}