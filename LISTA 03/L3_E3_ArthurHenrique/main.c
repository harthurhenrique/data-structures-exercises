#include<stdio.h>

/*
Faça uma função que receba como parâmetro um vetor X de 30 elementos inteiros e retorne,
também por parâmetro, dois vetores A e B. O vetor A deve conter os elementos pares de X
e o vetor B, os elementos ı́mpares.
*/

void Divide(int *VetX,int n,int *VetA,int *tamA,int *VetB,int *tamB)
{
    int i;

    for(i=0; i<n; i++)
    {
        printf("\nVetX:%d",VetX[i]);
        if(VetX[i] % 2 == 0)
        {
            VetA[*tamA] = VetX[i];
            printf("\nPos no VetA:%d",*tamA);
            *tamA = *tamA + 1;
        }
        else{
            VetB[*tamB] = VetX[i];
            printf("\nPos no VetB:%d",*tamB);
            *tamB = *tamB + 1;
        }
    }
}

int main()
{
    int X [30] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    int A [30], B [30];
    int i, j=0, k=0;

    Divide(X,30,A,&j,B,&k);
    printf("\nValores do j e k:%d %d",j,k);

    printf("\nValores do Vetor A:");
    for(i=0;i<j;i++)
        printf(" %d",A[i]);

    printf("\n\nValores do Vetor B:");
    for(i=0;i<k;i++)
        printf(" %d",B[i]);

    return 0;
}
