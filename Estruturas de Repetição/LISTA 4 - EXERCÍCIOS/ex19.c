#include <stdio.h>
int main(){
    float peso,altura,Maisalto=1;
    int i;
    float PesoDaPessoaMaisAlta;

    printf("Digite o peso e altura de 5 pessoas:\n");

    for(i=0;i<=4;i++){
        scanf("%f%f", &peso,&altura);

        if(altura > Maisalto){
            Maisalto = altura;
            PesoDaPessoaMaisAlta = peso;
        }
    }
    printf("Peso e altura da pessoa mais alta: %.2fKg e %.2fm", PesoDaPessoaMaisAlta,Maisalto);
}