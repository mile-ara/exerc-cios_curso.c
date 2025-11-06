
#include <stdio.h>
#include <time.h>

int main(void)
{
    //pegar a hora atual
    time_t t;
    struct tm *hora;
    time(&t);
    hora = localtime(&t);
    int h = hora->tm_hour;
    int inicio = 15;
    float preco = 20;
    //Cabeçalho do Programa
    printf("\n====================== CINEMA ======================\n");
    printf(" HORARIO DO FILME: %dh - PREÇO DO INGRESSO: R$%.2f\n", inicio, preco);
    printf("-----------------------------------------------------\n");
    printf("Hora atual: %d\n", h);
    // Entrada de dados
    float din;
    printf("Quanto dinheiro voce tem? R$");
    scanf("%f", &din);
    //Verificação
    if(h < inicio && din >= preco)
    {
        printf("Voce consegue comprar o ingresso. Seja bem-vindo(a)!\n");
    }
    else
    {
        printf("Infelizmente não é possível comprar o ingresso! Volte outro dia!\n");
    }
}