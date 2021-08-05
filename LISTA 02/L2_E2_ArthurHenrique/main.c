#include <stdio.h>

/*
Crie um programa que receba três valores (obrigatoriamente maiores que zero), representando as
medidas dos três lados de um triângulo. Elabore funções para:
(a) Determinar se eles lados formam um triângulo, sabendo que:
• O comprimento de cada lado de um triângulo é menor do que a soma dos outros
dois lados.
(b) Determinar e mostrar o tipo de triângulo, caso as medidas formem um triângulo. Sendo que:
• Chama-se equilátero o triângulo que tem três lados iguais.
• Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais.
• Recebe o nome de escaleno o triângulo que tem os três lados diferentes.
*/

float repita(float zero){
    while(zero<=0){
        printf("Valor invalido, insira um valor maior que 0.\n");
        scanf("%f", &zero);
    }
    return zero;
}

void triangle_kind(float quatro,float cinco,float seis){
    if(quatro == cinco && cinco == seis){
        printf("Esse triangulo e do tipo Equilatero\n");
    }
    else if(quatro != cinco && cinco != seis && quatro!=seis) {
        printf("Esse triangulo e do tipo Escaleno\n");
    }
    else{
        printf("Esse triangulo e do tipo Isosceles!\n");
    }
}

void triangle(float um,float dois,float tres){
    if(um < dois+tres && dois < um+tres && tres < um+dois) {
        triangle_kind(um, dois, tres);
    }
    else{
        printf("Os valores nao formam um triangulo :(\n");
    }
}

void main() {
    float a, b, c;

    printf("Insira as medidas do triangulo:\nLado A\n");
    scanf("%f", &a);
    if(a<=0){
        a = repita(a);
    }
    printf("Lado B\n");
    scanf("%f", &b);
    if(b<=0){
        b = repita(b);
    }
    printf("Lado C\n");
    scanf("%f", &c);
    if(c<=0){
        c = repita(c);
    }
    printf("Valores:\na = %2.f\nb = %2.f\nc = %2.f\n\n", a, b, c);
    triangle(a,b,c);
}
