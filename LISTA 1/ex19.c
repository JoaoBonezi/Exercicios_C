#include <stdio.h>
int main(){
    int n1,n2,diferenca;
    char operador;

    printf("Digite dois numeros:\n");
    scanf("%d%d", &n1,&n2);

    if(n1<0){
        diferenca = n1 - n2;
        printf("%d - %d = %d ", n1,n2,diferenca);
    }
    else if(n2<0){
        diferenca = n1 - n2;
        printf("%d - (%d) = %d ", n1,n2,diferenca);
    }
    else{
        diferenca = n1 - n2;
        printf("%d - %d = %d ", n1,n2,diferenca);
    }
    return 0;
}

//o C faz o calculo certo mesmo quando o numero eh negativo.