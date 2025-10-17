/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lis.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milenaaraujorodrigues2102 <milenaaraujo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:24:59 by milenaarauj       #+#    #+#             */
/*   Updated: 2025/10/17 18:54:32 by milenaarauj      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main()
{
    char nome1[50], nome2[50], nome3[50];
    char sexo1, sexo2, sexo3;
    float nota1, nota2, nota3;

    printf("Cadastrando a primeira pessoa:\n");
    printf("----------------------------------\n");
    printf("NOME: ");
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = 0;
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

    return 0;
}