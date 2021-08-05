#include <stdio.h>

/*
Faça um programa que calcule a pontuação de dois times após uma partida de futebol. Na função
principal leia dois números inteiros que correspondem ao número de pontos dos dois times antes do
jogo. Depois leia dois inteiros que representam o número de gols que cada time fez na partida. Você
deverá fazer uma função separada que receba os pontos dos dois times por referência e os atualize
de acordo com o resultado. Em caso de vitória são somados 3 pontos, em caso de empate é somado
um ponto, e em caso de derrota, nenhum ponto é somado
*/

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
