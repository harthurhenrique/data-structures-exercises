#include <stdio.h>

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
