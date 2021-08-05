#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Aluno{
    char nome [50];
    char mat [30];
    char sit [30];
    float n_1;
    float n_2;
    float n_3;
    float md_geral;
};

int main() {

    int qtd;

    printf("Quantos alunos serao cadastrados?\n");
    scanf("%d", &qtd);
    setbuf(stdin, NULL);

    struct Aluno aluno[qtd];

    int i = 0;
    int j = 0;
    int k = 0;
    int ma_p;
    int ma_md;
    int me_md;
    int mp;
    int ma;
    int me;

    while (i < qtd) {
        printf("Nome:\n");
        scanf("%[^\n]", &aluno[i].nome);
        setbuf(stdin, NULL);
        printf("Numero de matricula:\n");
        scanf("%[^\n]", &aluno[i].mat);
        printf("Nota da primeira prova:\n");
        scanf("%f", &aluno[i].n_1);
        printf("Nota da segunda prova:\n");
        scanf("%f", &aluno[i].n_2);
        printf("Nota da terceira prova: \n");
        scanf("%f", &aluno[i].n_3);
        printf("\n");
        setbuf(stdin, NULL);
        aluno[i].md_geral = (aluno[i].n_1 + aluno[i].n_2 + aluno[i].n_3)/3;
        i++;
    }

    while(j < qtd) {

        if(j == 0){
            ma_p = aluno[0].n_1;
            ma_md = aluno[0].md_geral;
            me_md = aluno[0].md_geral;
            mp = j;
            ma = j;
            me =j;
        }

        else {
            if(aluno[j].n_1 > ma_p) {
                ma_p = aluno[j].n_1;
                mp = j;
            }
            if(aluno[j].md_geral > ma_md) {
                ma_md = aluno[j].md_geral;
                ma = j;
            }
            if(aluno[j].md_geral < me_md) {
                me_md = aluno[j].md_geral;
                me = j;
            }
        }

        setbuf(stdin, NULL);
        j++;
    }

    while(k < qtd) {

        printf("Nome: %s\n", aluno[k].nome);
        printf("Numero de matricula: %s\n", aluno[k].mat);
        printf("Prova 1 = %.2f\nProva 2 = %.2f\nProva 3 = %.2f\n", aluno[k].n_1, aluno[k].n_2, aluno[k].n_3);
        printf("Media geral = %.2f\n", aluno[k].md_geral);

        if(aluno[k].md_geral<6) {
            printf("Aluno Reprovado!\n\n");
        }
        else {
            printf("Aluno Aprovado!\n\n");
        }
        k++;
    }


    setbuf(stdin, NULL);
    printf("Maior primeira nota: %s\n", aluno[mp].nome);
    setbuf(stdin, NULL);
    printf("Maior media: %s\n", aluno[ma].nome);
    setbuf(stdin, NULL);
    printf("Menor media: %s\n", aluno[me].nome);
    setbuf(stdin, NULL);
    return 0;
}
