#include <stdio.h>

/*
Faça uma função não-recursiva que receba um número inteiro positivo N e retorne o superfatorial
desse número. O superfatorial de um número N é definida pelo produto dos N primeiros fatoriais de
N. Assim, o superfatorial de 4 é sf(4) = 1! * 2! * 3! * 4! = 288.
*/

void fat() {
    int n, i, f = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        f *= i;
        printf("Fatorial = %d\n", f);
    }
}

int main() {
    int n;

    printf("Insira algum valor:\n");
    scanf("%d", &n);
    fat(n);

    return 0;
}
