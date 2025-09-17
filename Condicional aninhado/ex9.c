#include <stdio.h>
int main(){
    int n1,n2,n3,n4,n5;

    printf("Digite cinco numeros de (1 a 6):\n");
    scanf("%d%d%d%d%d", &n1,&n2,&n3,&n4,&n5);

    if(n1==n2 && n2==n3 && n3==n4 && n4==n5){
        printf("Os valores sao iguais.\n");
    }

    else if(n1 == 1 && n2==2 && n3==3 && n4==4 && n5==5 || n1==2 && n2==3 && n3==4 && n4==5 && n5==6){
        printf("Sequencia formada!\n");
    }

    else if((n1==n2 && n2==n3 && n3==n4 && n4!=n5)||(n1==n2 && n2==n3 && n3==n5 && n5!=n4)||(n1==n2 && n2==n4 && n4==n5 && n5!=n3)||(n1==n3 && n3==n4 && n4==n5 && n5!=n2)||(n2==n3 && n3==n4 && n4==n5 && n5!=n1)){
        printf("4 numeros iguais e um diferente.\n");
    }
    else if ((n1==n2 && n2==n3 && n4==n5 && n1!=n4)||   // 3 primeiros iguais, últimos 2 iguais
            (n1==n2 && n2==n4 && n3==n5 && n1!=n3) ||   // n1 n2 n4 iguais, n3 n5 iguais
            (n1==n2 && n2==n5 && n3==n4 && n1!=n3) ||   // n1 n2 n5 iguais, n3 n4 iguais
            (n1==n3 && n3==n4 && n2==n5 && n1!=n2) ||   // n1 n3 n4 iguais, n2 n5 iguais
            (n1==n3 && n3==n5 && n2==n4 && n1!=n2) ||   // n1 n3 n5 iguais, n2 n4 iguais
            (n1==n4 && n4==n5 && n2==n3 && n1!=n2) ||   // n1 n4 n5 iguais, n2 n3 iguais
            (n2==n3 && n3==n4 && n1==n5 && n2!=n1) ||   // n2 n3 n4 iguais, n1 n5 iguais
            (n2==n3 && n3==n5 && n1==n4 && n2!=n1) ||   // n2 n3 n5 iguais, n1 n4 iguais
            (n2==n4 && n4==n5 && n1==n3 && n2!=n1) ||   // n2 n4 n5 iguais, n1 n3 iguais
            (n3==n4 && n4==n5 && n1==n2 && n3!=n1)) {  // n3 n4 n5 iguais, n1 n2 iguais

        printf("Foram encontrados 3 iguais e 2 iguais.\n");
    }
    else{
        printf("Nenhuma sequencia encontrada.\n");
    }
        
    
}