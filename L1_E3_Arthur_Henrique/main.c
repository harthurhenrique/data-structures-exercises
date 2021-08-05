#include <stdio.h>

struct Numcomplex{
    float real;
    float imag;
};

int main() {

    struct Numcomplex w;
    struct Numcomplex z;

    printf("Numero Complexo Z\n\n");
    printf("Insira o valor real:\n");
    scanf("%f", &z.real);
    printf("Insira o valor imaginario:\n");
    scanf("%f", &z.imag);

    printf("\n");

    printf("Numero Complexo W\n\n");
    printf("Insira o valor real:\n");
    scanf("%f", &w.real);
    printf("Insira o valor imaginario:\n");
    scanf("%f", &w.imag);

    float soma_r = z.real + w.real;
    float soma_i = z.imag + w.imag;
    float sub_r = z.real - w.real;
    float sub_i = z.imag - w.imag;
    float prod_real = ((z.real*w.real)-(z.imag*w.imag));
    float prod_img = ((z.real*w.imag)+(z.imag*w.real));

    printf("\nOperacoes com numeros complexos:\n\n");
    if(soma_i<0){
        printf("Soma de Z + W =  %1.f %1.fi\n", soma_r, soma_i);
    }
    else if(soma_i>0){
        printf("Soma de Z + W =  %1.f + %1.fi\n", soma_r, soma_i);
    }
    if(sub_i<0){
        printf("Subtracao de Z + W = %1.f %1.fi\n", sub_r, sub_i);
    }
    else if(sub_i>0){
        printf("Subtracao de Z + W = %1.f + %1.fi\n", sub_r, sub_i);
    }
    if(prod_img<0){
        printf("Produto de Z + W = %1.f %1.fi\n", prod_real, prod_img);
    }
    else if(prod_img>0){
        printf("Produto de Z + W = %1.f + %1.fi\n", prod_real, prod_img);
    }

    return 0;
}
