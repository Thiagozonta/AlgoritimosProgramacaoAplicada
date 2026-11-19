#include<stdio.h>

int main(void){
    int vetorA[10], i;

    for (i = 0; i < 10; i++){
        printf("digite o %d do elemento: ", i);
        scanf("%d", &vetorA[i]);
    }

    printf("\nVetor Preenchido\n");
    for (i = 0; i < 10; i++)
        printf("O elemento na posicao %d eh: %d\n", i, vetorA[i]);

    return 0;
}