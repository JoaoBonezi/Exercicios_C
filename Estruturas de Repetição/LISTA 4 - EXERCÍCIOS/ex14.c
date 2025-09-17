#include <stdio.h>
int main(){
    int Multiplicando,Multiplicador;

    printf("Informe o numero multiplicando:\n");
    scanf("%d", &Multiplicando);

    printf("Informe o multiplicador:\n");
    scanf("%d", &Multiplicador);

    // mult = 3 plicador = 2: 3+3 = 6.

    int soma = 0;
    int i;

    for(i=0;i<Multiplicador;i++){
        soma += Multiplicando;
    }
    printf("O resultado da soma eh %d", soma);

}