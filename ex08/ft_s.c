/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milenaaraujorodrigues2102 <milenaaraujo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:36:26 by milenaarauj       #+#    #+#             */
/*   Updated: 2025/10/17 12:09:40 by milenaarauj      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void main()
{
    char nome[30];
    int idade;
    float peso;
    printf("Qual é o seu nome? ");
    fgets(nome, sizeof(nome), stdin);
    printf("Quantos anos voce tem? ");
    scanf("%d", &idade);
    printf("Qual é o seu peso? ");
    scanf("%f", &peso);
    printf("Muito prazer %s.Voce tem %d anos e pesa %.2fkg correto?\n", nome, idade, peso);
    printf("FIM.");
}