
#include <stdio.h>

int main(void)
{
    int ano_nasc, idade, ano_atual;

    ano_atual = 2025; // aqui eu coloco que a minha variavel ano_atual recebe o valor 2025, que é o
    // ano atual que estamos, para fazermos a subtraçao e eu receber a idade correta do usuario
    printf("<<< Fila do Banco >>>\n");
    printf("Em que ano voce nasceu? ");
    scanf("%d", &ano_nasc);
    
    idade = ano_atual - ano_nasc; // aqui eu subtraio o ano_atual que é 2025 - o ano_nas que vai ser o ano
    // que o usuario colocar, e eu terei a idade correta
    
    if(idade >= 65) // uma condiçao para pessoas que tem entre 65 ou mais
    {
       printf("Voce tem %d anos, certo?\n", idade);
       printf("Seja bem-vindoa(a) ao Banco Santander!\n");
       printf("=== ATENÇÃO! DIRIJA-SE PARA A FILA PREFERENCIAL ===\n");
    }
    else // caso o meu if seja falso, o else é a alternativa que meu programa fará
    {
        printf("Voce tem %d anos, certo?\n", idade);
        printf("Seja bem-vindo(a) ao Banco Santander!\n");
    }
    return(0);
}