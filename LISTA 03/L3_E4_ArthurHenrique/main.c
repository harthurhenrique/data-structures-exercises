#include <stdio.h>

struct Ponto{
    int x;
    int y;
};

int dentroRet(struct Ponto *v1, struct Ponto *v2, struct Ponto *v3, struct Ponto *v4, struct Ponto *p1, struct Ponto *p2){
    if(p1<=v1 && p1<=v3) {
        if(p2 <= v2 && p2 <= v4) {
            return 1;
        }
    }
    else {
        return 0;
    }
};

int main() {
    struct Ponto v1;
    struct Ponto v2;
    struct Ponto p;

    v1.x = -10;
    v1.y = -10;
    v2.x = 10;
    v2.y = 10;
    p.x = 12;
    p.y = 12;

    int resposta = dentroRet(v1.x, v1.y, v2.x, v2.y, p.x, p.y);

    if(resposta == 1){
        printf("Valor esta dentro do retangulo.\n");
    }
    else if(resposta == 0){
        printf("Valor nao esta dentro do retangulo.\n");
    }

    return 0;
}
