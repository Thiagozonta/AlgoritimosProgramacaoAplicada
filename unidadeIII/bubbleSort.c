//metodo da bolha
#include<stdio.h>
int main(void){
    int vetor[10];
    int i, j, troca;

    for ( i = 0; i < 10; i++){
        printf("Digite o elemento: %d", i);
        scanf("%d, &vetor[i]");
    }
    
    //Realiza o metodo da bolha 
    for (i = 0; i < 9; i++)
        for (j = i + 1; j < 10; j++)
            if (vetor[i]>vetor[j]){
                troca = vetor[j];
                vetor[i] = vetor[j];
                vetor[j] = troca;
            }
        printf("\nVetor Ordenado: { ");
    for (i = 0; i < 10; i++)
        printf("%d", vetor[i]);
    printf("}\n");
    
    return 0;
}