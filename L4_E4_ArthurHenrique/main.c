#include <stdio.h>

void reordenar(int *c, int *d){
    int maior, menor;
    if(*c>*d){
        maior = *c;
        menor = *d;
    }
    else{
        maior = *d;
        menor = *c;
    }

    *c = maior;
    *d = menor;

}

int main() {

    int a = 1;
    int b = 9;

    reordenar(&a,&b);

    printf("%d|%d\n", a,b);
    return 0;
}
