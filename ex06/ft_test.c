/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milenaaraujorodrigues2102 <milenaaraujo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 20:24:13 by milenaarauj       #+#    #+#             */
/*   Updated: 2025/10/16 20:31:22 by milenaarauj      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void main()
{
    int idade = 19;
    float peso = 44.6;
    char sexo = 'F';
    char nome[] = "Milena";
    printf("%s é do sexo %c, tem %d anos e pesa %.2fkg", nome, sexo, idade, peso);
}