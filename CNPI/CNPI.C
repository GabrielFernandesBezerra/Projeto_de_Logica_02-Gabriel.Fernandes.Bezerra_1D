#include <stdio.h>

//Variaveis (a N tem um array de 10 números no máximo)
 int main (void) {
    int  n [10];
    int i;
    int impares = 0;
    int pares = 0;
    int sair = 1;

//estrutura de repetição
while(sair == 1) {
        printf ("|| Quer iniciar o programa? ||\n|| Digite 1 para começar e 0 para encerrar o loop: ");
        scanf  ("%d", &sair);
        printf ("\n\n|| Digite alguns números||\n|| Limite de 10 números ||\n");
        
//aqui vai pedindo para adicionar o valor desejado, do qual I vai sendo incrementado e conforme o i aumentar, o valor digitado vai estar na casa do array do valor do i. Exemplo: Se i=2, o valor digitado em N será armazenado no número 2 do array de N de N        
    for (i = 0; i < 10; i++) {
        printf("   Digite o valor %d: ", i + 1);
        scanf("%d", &n[i]);
    }
        
//Aqui vai verificando o Array de N pouco a pouco e se o número for divisivel por 2 vai contar mais um pra variavel par e senão vai contar para os impares
    for(int a = 0; a < 10; a++){
        if (n[a] % 2 == 0) {
          pares++;
        } else {
            impares++;
        }
    }
    
//A Conclusão, em uma linha vai imprimir a quantidade que foi armazenada em números pares e na outra linha vai imprimir os impares   
        printf ("\n|| Tem %d números pares   || \n", pares);
        printf ("|| Tem %d números impares ||\n\n", impares);

//reinicia os Valores de Par e Impares para não se somarem no loop
        pares = 0;
        impares = 0;
}
    return 0;

}