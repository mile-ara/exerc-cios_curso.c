
#include <stdio.h>
#include <string.h>

int main(void)
{
   char nome[50]; // tem que ter tamanho suficiente para armazenar o nome
   float n1, n2, media;
   
   printf("<<<<<< Média do Aluno/a >>>>>>\n");
   printf("Nome do aluno/a: ");
   fgets(nome, sizeof(nome), stdin);
   nome[strcspn(nome, "\n")] = '\0';
   printf("Nota 1: ");
   scanf("%f", &n1);
   printf("Nota 2: ");
   scanf("%f", &n2);
   media = (n1 + n2) / 2; // calculando a média do aluno
   printf("O/a aluno/a %s tirou notas %.1f e %.1f e ficou com média %.1f\n", nome, n1, n2, media);
   return(0);
}