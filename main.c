    /* Author: Thiago Oecksler Zonta
       Data: 15/11/2026
   */
    #include <stdio.h>
    #include <math.h>

int main(void){
    float valorAula, salarioBruto, salarioLiquido, descontoINSS, percentualINSS;
    int numeroAulas;
    int opcao;
  

                /*eu poderia usar a questao de if e else, 
                mas estou praticando a utilidade de switch */

        printf("digite o valor de hora/aula:R$  ");
        scanf("%f", &valorAula);
        
        printf("digite a quantia de aulas exercidas:  ");
        scanf("%d", &numeroAulas);

        salarioBruto = valorAula * numeroAulas;
        printf("O valor do seu salario bruto eh de: %.2f\n", salarioBruto);

        printf("Digite o percentual de desconto do INSS: ");
        scanf("%f", &percentualINSS);

        percentualINSS = percentualINSS / 100;
    
        descontoINSS = salarioBruto * percentualINSS;
        /* o desconto do inss vai ser o salario cheio, vezes o percentual inss
         que esta atribuido o valor dependendo da opcao que o user escolher*/
        salarioLiquido = salarioBruto - descontoINSS;
        printf("\n==============================================\n");
        printf("\nSalario bruto: R$ %.2f\n", salarioBruto);
        printf("Desconto INSS: R$ %.2f\n", descontoINSS);
        printf("Salario liquido: R$ %.2f\n", salarioLiquido);
       


    return 0;
}