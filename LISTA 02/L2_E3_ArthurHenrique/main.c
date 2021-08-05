#include <stdio.h>



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
