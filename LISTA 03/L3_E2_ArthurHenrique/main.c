#include <stdio.h>

int calcular(*p1, *p2, g1, g2){
    if(g1>g2){
        *p1 = p1 + 3;
    }
    else if(g1==g2){
        *p1 = p1 + 1;
        *p2 = p2 + 1;
    }
    else{
        *p2 = p2 + 3;
    }
}

int main() {

    int ga, gb;
    int pa, pb;

    printf("Pontos do time A, pre jogo:\n");
    scanf("%d", &pa);
    printf("Pontos do time B, pre jogo:\n");
    scanf("%d", &pb);
    printf("Insira a quantidade de gols do time A:\n");
    scanf("%d", &ga);
    printf("Insira a quantidade de gols do time B:\n");
    scanf("%d", &gb);

    calcular(pa, pb, ga, gb);

    return 0;
}
