#include<stdio.h>

int main(void){
    int valores[10], i, valor;

    for (i = 0; i < 10; i++){
        printf("Digite o elemento que deseja procurar no vetor: ", i);
        scanf("%d", &valores[i]);
    }

    printf("\nValor a procurar no vetor: ", i);
    scanf("%d", &valor);

    //efetua a busca sequencial
    for (i = 0; i < 10; i++)
        if (valores[i] == valor)
                    break;

    if (i == 10) printf("Valor nao encontrado no vetor\n");
    else    
    printf("Encontrado na posicao %d\n", i);

    return 0;
}