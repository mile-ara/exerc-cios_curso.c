
#include <stdio.h>

int main(void)
{
    char l;
    char a;
    char s;

    printf("<<<<<< Alfabeto >>>>>>\n");
    printf("Digite uma letra: ");
    scanf("%c", &l);
    a = l - 1;
    s = l + 1;
    printf("Antes da letra %c temos a letra %c. Depois temos a letra %c\n", l, a, s);
    return(0);
}