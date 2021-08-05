#include <stdio.h>

/*
Faça funções que recebam um vetor de inteiros e retorne:
(a) quantos valores pares ele possui;
(b) retorne o maior valor;
(c) retorna a média aritmética dos elementos do vetor;
(d) impressão inversa do vetor.
*/

int preencher(int com);
int maior_valor(int *V, int com);
float media(int *V, int com);
void inversa(int *V, int com);
int pares(int *V, int com);

int main() {
    int tam;
    int Vetor;
    printf("Insira o tamanho do vetor:\n");
    scanf("%d", &tam);
    Vetor = preencher(tam);
    return 0;
}

int preencher(int com){
    int V[com];
    int i = 0;
    while (i<com){
        printf("Inserir valor na posicao [%d]:\n", i);
        scanf("%d", &V[i]);
        i++;
    }
    printf("\nO maior valor e %d", maior_valor(V,com));
    printf("\nA media aritmetica e %2.f", media(V,com));
    printf("\nA quantidade de numeros pares e %d", pares(V,com));
    inversa(V,com);
}

int maior_valor(int *V, int com){
    int k;
    int maior = V[0];
    int aux;
    for(int k=1;k<com;k++){
        aux = V[k];
        if(aux>maior){
            maior = V[k];
        }
    }
    return maior;

}

float media(int *V, int com){
    int l;
    int tot = 0;
    for(int l=0;l<com;l++) {
        tot = tot + V[l];
    }
    return tot/com;
}

void inversa(int *V, int com){
    printf("\nVetor Inverso = [");
    for(int j=com-1;j>=0;j--){
        if(j==0){
            printf("%d", V[j]);
        }
        else{
            printf("%d, ", V[j]);
        }
    }
    printf("]");
}

int pares(int *V, int com){
    int pares = 0;
    for(int m=0;m<com;m++){
        if((V[m] % 2) == 0){
            pares = pares + 1;
        }
    }
    return pares;
}

