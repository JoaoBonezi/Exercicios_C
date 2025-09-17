#include <stdio.h>
int main(){
    int i;
    printf("Numeros impares entre 1 a 200:\n");
    for(i=1;i<=200;i++){
        if(i % 2 == 1){
            printf("%d\n", i);
        }
    }
    return 0;
}