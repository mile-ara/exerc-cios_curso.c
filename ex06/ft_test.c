
#include <stdio.h>

int main(void)
{
    int idade = 19;
    float peso = 44.6;
    char sexo = 'F';
    char nome[] = "Milena";
    printf("%s é do sexo %c, tem %d anos e pesa %.2fkg", nome, sexo, idade, peso);
    return(0);
}