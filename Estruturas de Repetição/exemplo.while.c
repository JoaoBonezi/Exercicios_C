#include <stdio.h>
int main(){
    int InformeNovaProva=1,dig=1;
    float total=0,nota=0;
    int qtddeprovas = 0;
    while(InformeNovaProva == 1){
        printf("Digite a nota %d:\n ",dig);
        scanf("%f", &nota);
        total+=nota;
        dig++;

        printf("Informar outra prova | 1 - sim | | 0 - nao\n");
        scanf("%d", &InformeNovaProva);

        if(InformeNovaProva == 1){
        qtddeprovas++;
        }
    }
    total = total / (float)qtddeprovas;
    printf("Media aritmetica: %.2f\n", total);
}