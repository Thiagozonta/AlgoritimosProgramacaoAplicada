#include<stdio.h> 

int main(void){
    char texto[50];
    int tamanho;
    while(1) {
        printf("Digite o texto: ");
        fflush(stdin);// para previnir o bug de nao editar
        gets(texto);
    
        if (texto[0] == '\0') //nao foi digitado nenhum valor
        break;

        //contas quantas letras tem o texto
        for (tamanho = 0; texto[tamanho] != `\0`; tamanho++);
        printf("tamanho do texto: %d\n", tamanho;
    
    }

    return 0;
}

