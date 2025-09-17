#include <stdio.h>
#include <math.h>

int main(){
    int n1,n2,resultado = 0 ,DiferenElevadoQuadrado = 0;
    printf("Digite dois numeros inteiros:\n");
    scanf("%d%d", &n1,&n2);
    resultado = n1-n2;
    DiferenElevadoQuadrado = pow(resultado,2);
    printf("Resultado: %d", DiferenElevadoQuadrado);
}