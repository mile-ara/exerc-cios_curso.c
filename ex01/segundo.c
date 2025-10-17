/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   segundo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milenaaraujorodrigues2102 <milenaaraujo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:12:09 by milenaarauj       #+#    #+#             */
/*   Updated: 2025/10/16 13:12:12 by milenaarauj      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void main()
{
    char nome[10];
    printf("Qual é o seu nome?");
    scanf("%s", &nome);
    printf("Muito prazer em te conhecer %s", nome);
}