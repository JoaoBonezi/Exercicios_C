#include <stdio.h>
#include <math.h>
int main(){
    int alt,raio,pi,QuantDeLatas,ValorGasto;
    float AreaDoCilindro;
    printf("Digite a altura do cilindro:\n");
    scanf("%d", &alt);
    printf("Digite o raio do cilindro:\n");
    scanf("%d", &raio);

    pi=3.14159*2;
    AreaDoCilindro = ((pi*raio)+(raio + alt));
    QuantDeLatas =(float) AreaDoCilindro / 5;
    ValorGasto = QuantDeLatas * 40;

    printf("\nA qauntidade de latas usados foi: %d\n", QuantDeLatas);
    printf("\nValor Gasto: R$%d\n", ValorGasto); 
}