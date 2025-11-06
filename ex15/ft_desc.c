
#include <stdio.h>
#include <string.h>

int main(void)
{
    char prod[50];
    float pre, desc, prefi;
    printf("<<< Calculo de Desconto >>>\n");
    printf("Nome do produto: ");
    fgets(prod, sizeof(prod), stdin); //fgets usado como segurança para nao ultrapassar o limite do buffer
    prod[strcspn(prod, "\n")] = '\0'; //adicionei essa linha para nao ter problemas com o printf. Pois quando o usario digita o nome e clica no enter o \n é adicionado, entao uso isso para substituir o \n pelo '\0'
    printf("Preço do produto: ");
    scanf("%f", &pre);
    printf("Desconto (%) ");
    scanf("%f", &desc);
    prefi = pre - (pre * desc / 100);
    printf("O produto %s custava %.2f, mas com %.2f%% de desconto, passa a custar %.2f", prod, pre, desc, prefi);
    return(0);
}