#include <stdio.h>
int main(){
    int v1,v2,razao,NumeroDeTermos,SomaDosTermos;

    printf("Digite o primeiro e o ultimo termo da PA: \n");
    scanf("%d%d", &v1,&v2);

    printf("Digite o valor da razao: \n");
    scanf("%d", &razao);

    //calcula o numero de termos

    NumeroDeTermos = (v2-v1)/razao;
    SomaDosTermos = (v1+v2)/2*NumeroDeTermos;
    
    printf("O resultado da PA eh %d. ", SomaDosTermos);
}