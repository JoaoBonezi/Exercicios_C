#include <stdio.h>
int main(){
    int n1,n2,n3;
    printf("Digite 3 numeros inteiros:\n");
    scanf("%d%d%d", &n1,&n2,&n3);

    if(n1>n2&&n1>n3){
        printf("Numero maior: %d", n1);
    }
    else if(n2>n1&&n2>n3){
        printf("Numero maior: %d", n2);
    }
    else if(n3>n2&&n3>n1){
        printf("Numero maior: %d", n3);
    }
    return 0;
}