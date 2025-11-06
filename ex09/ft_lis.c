
#include <stdio.h>
#include <string.h>

int main(void)
{
    char nome1[50], nome2[50], nome3[50];
    char sexo1, sexo2, sexo3;
    float nota1, nota2, nota3;

    printf("Cadastrando a primeira pessoa:\n");
    printf("----------------------------------\n");
    printf("NOME: ");
    fgets(nome1, sizeof(nome1), stdin);// Lê uma linha de texto do teclado (stdin) e armazena no array 'nome1'.
    // 'sizeof(nome1)' garante que não sejam lidos mais caracteres do que o tamanho do array permite.

    nome1[strcspn(nome1, "\n")] = 0; // Substitui o caractere '\n' (nova linha) por '\0' (fim de string), caso exista.
    //retorna a posição do '\n' dentro de nome1.
    // Isso evita que a quebra de linha fique na string, deixando-a "limpa".
    printf("SEXO [M/F]: ");
    scanf(" %c", &sexo1);
    printf("NOTA: ");
    scanf("%f", &nota1);
    getchar();

    printf("Cadastrando a segunda pessoa:\n");
    printf("----------------------------------\n");
    printf("NOME: ");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = 0;
    printf("SEXO [M/F]: ");
    scanf(" %c", &sexo2);
    printf("NOTA: ");
    scanf("%f", &nota2);
    getchar();

    printf("Cadastrando a terceira pessoa:\n");
    printf("----------------------------------\n");
    printf("NOME: ");
    fgets(nome3, sizeof(nome3), stdin);
    nome3[strcspn(nome3, "\n")] = 0;
    printf("SEXO [M/F]: ");
    scanf(" %c", &sexo3);
    printf("NOTA: ");
    scanf("%f", &nota3);

    printf("\nListagem Completa\n");
    printf("-----------------\n");
    printf("%-20s %-5s %-5s\n", "NOME", "SEXO", "NOTA");
    printf("%-20s %-5c %.1f\n", nome1, sexo1, nota1);
    printf("%-20s %-5c %.1f\n", nome2, sexo2, nota2);
    printf("%-20s %-5c %.1f\n", nome3, sexo3, nota3);

    return(0);
}