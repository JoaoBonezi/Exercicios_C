#include <stdio.h>
int main(){
    int quociente,dividendo,i=1;

    printf("Digite o quociente:\n");
    scanf("%d", &quociente);

    printf("Digite o dividendo:\n");
    scanf("%d", &dividendo);

    int soma = 0;
    int contsub = 0;
    while(i<quociente){
        soma -=soma - dividendo;
        contsub++;
        i++;
    }
    printf("Quociente da divisao eh %d", i);
}