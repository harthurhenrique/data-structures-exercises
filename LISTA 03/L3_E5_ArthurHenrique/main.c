#include <stdio.h>

/*
Considerando a estrutura
struct Vetor{
float x;
float y;
float z;
};
para representar um vetor no R3
 , implemente uma função que calcule a soma de dois vetores. Essa
função deve obedecer ao protótipo:
void soma (struct Vetor* v1, struct Vetor* v2, struct Vetor* res);
onde os parâmetros v1 e v2 são ponteiros para os vetores a serem somados, e o parâmetro res é um
ponteiro para uma estrutura vetor onde o resultado da operação deve ser armazenado.
*/

struct Vetor{
    float x;
    float y;
    float z;
};

struct Vetor soma(struct Vetor *v1, struct Vetor *v2, struct Vetor *res){
    res->x = v1->x + v2->x;
    res->y = v1->y + v2->y;
    res->z = v1->z + v2->z;

    return *res;
};

int main() {
    struct Vetor vt1;
    vt1.x = 21.985;
    vt1.y = 9.542;
    vt1.z = 8.1478;

    struct Vetor vt2;
    vt2.x = 0.001;
    vt2.y = 0.05984;
    vt2.z = 1.00009;

    struct Vetor vt3;

    vt3 = soma(&vt1, &vt2, &vt3);

    printf("Soma dos dois vetores:\n");
    printf("[%.2f, %.2f, %.2f]", vt3.x, vt3.y, vt3.z);

    return 0;
}
