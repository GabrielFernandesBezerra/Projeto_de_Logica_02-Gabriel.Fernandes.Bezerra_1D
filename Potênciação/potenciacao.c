#include <stdio.h>

//isso inclui uma biblioteca de códigos que permite realzar operações mais avançadas, como o Pow na linha 32
#include <math.h>

int main(void) {
    
//vaiaveis (N e expoente para as contas e Sair para encerrar o loop)
    int n, expoente;
    int sair = 1;
    
 //incio do programa com a opção de iniciar ou terminar o loop  
while (sair == 1) {
    printf("|| Quer iniciar o programa? ||\n|| Digite 1 começar o loop e 0 para encerrar ele: ");
    scanf ("%d", &sair);
  
//número que será armazenado em N para ser potencialziado
    printf("\n|| Digite um número para ser potencializado: ");
    scanf("%d", &n);

//Momento que é digitado o expoente do número N
    printf("|| Digite seu expoente: ");
    scanf("%d", &expoente);

//O resultado e o calculo, o Pow serve para fazer cálculo de potencia
    printf("|| O resultado é o seguinte: %.0f ||\n\n", pow(n, expoente));
}
    return 0;
}
