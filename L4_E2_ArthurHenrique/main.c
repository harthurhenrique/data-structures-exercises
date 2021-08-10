#include <stdio.h>

int main() {

    int a, b;
    printf("Insira um valor:\n");
    scanf("%d", &a);
    printf("Insira um valor:\n");
    scanf("%d", &b);

    if(&a>&b){
        printf("O endereco de memoria de A e o maior. %d\n", &a);
    }
    else{
        printf("O endereco de memoria de B e o maior. %d\n", &b);
    }

    return 0;
}
