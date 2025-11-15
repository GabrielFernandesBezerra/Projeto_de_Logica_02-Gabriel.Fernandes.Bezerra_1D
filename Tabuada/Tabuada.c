#include <stdio.h>
//variaveis
int main(void) {
    int n, i;
    int sair = 1;
 
//sistema do loop
while(sair == 1) {
    printf("\n|| Quer iniciar o programa? ||\n|| Digite 1 para iniciar e 0 realiza-lo pela última vez:");
    scanf ("%d", &sair);

//o Armazenamento do número N do qual será multiplicado na tabuada
    printf("\n|| Digite um número para ser mostrado sua tabuada: ");
    scanf("%d", &n);
    printf (" ||A Tabuada do Número %d é: ||", n);
    
//Aqui define i como zero e vai incrementando +1 a cada vez até chegar a 10 e esse I vai ser multiplicado pelo N para gerar o resultado da tabuada
for (i = 0; i < 11; i++) {
    printf ("\n|| %d X %d = %d ||\n", n, i, n*i);
    
}

}
    return 0;
}
