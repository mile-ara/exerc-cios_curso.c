
#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t t;
    time(&t); // essa funçao time() preenche a variavel 't' com o tempo atual do sistema
    struct tm *data; // declaro um ponteiro para tm, que armazena a data, horal local
    data = localtime(&t); // converte o tempo armazenado em 't' para data, hora local
    int d = data->tm_mday;
    int m = data->tm_mon + 1; // somar + 1, porque no tm_mon o meses vao de 0 a 11, entao somamos + 1 para mostrar os meses corretamente
    int a = data->tm_year + 1900; // tm_year é o numero de anos desde 1900 porque era mais eficiente antigamente e eficaz para economizar memoria.
    // Ainda é assim hoje por tradiçao e compatibilidade. Entao se somar 1900 obtemos o ano real
    printf("Estamos no dia %i, no mes %i e no ano %i", d, m, a);
    return(0);
}