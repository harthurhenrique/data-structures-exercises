#include <stdio.h>

/*
Crie uma função que receba como parâmetro um valor inteiro e gere como sa da n linhas com ı́
pontos de exclamação, conforme o exemplo abaixo (para n = 5):
!
!!
!!!
!!!!
!!!!!
*/

void exclama(int n){
    for(int i=0;i<n;i++){
        printf("!");
        for(int j=0;j<i;j++){
            printf("!");
        }
        printf("\n");
    }
}


void main() {
    int val;
    printf("Insira o valor desejado:\n");
    scanf("%d", &val);
    exclama(val);
}
