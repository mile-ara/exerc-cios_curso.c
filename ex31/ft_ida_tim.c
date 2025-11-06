
#include <stdio.h>
#include <time.h>   // biblioteca necessária para trabalhar com data e hora

int main(void)
{
    int ano_nasc, idade;
    time_t t = time(NULL); // pega o tempo atual do sistema em segundos desde 1970.
    // NULL significa  que não quero que o tempo seja armazenado em outro lugar, só quero o valor de retorno
    struct tm tm = *localtime(&t);// converte para o tempo local
    int ano_atual = tm.tm_year + 1900; // tm_year conta anos desde 1900, então somamos 1900. O computador
    // guarda o tempo de quantos segundos se passaram desde 1 de janeiro de 1970 a data fixa que definiram

    printf("<<< Fila do Banco >>>\n");
    printf("Em que ano você nasceu? ");
    scanf("%d", &ano_nasc);

    idade = ano_atual - ano_nasc;

    if(idade >= 65)
    {
        printf("Você tem %d anos, certo?\n", idade);
        printf("Seja bem-vindo(a) ao Banco Santander!\n");
        printf("=== ATENÇÃO! DIRIJA-SE PARA A FILA PREFERENCIAL ===\n");
    }
        else
        {
            printf("Você tem %d anos, certo?\n", idade);
            printf("Seja bem-vindo(a) ao Banco Santander!\n");
        }
    return 0;
}