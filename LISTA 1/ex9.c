#include <stdio.h>
#include <math.h>
int main(){
    int num,area;
    
    printf("Digite um numero:\n");
    scanf("%d", &num);

    area=pow(num, 2);

    printf("A area do quadrado eh %d.", area);
}