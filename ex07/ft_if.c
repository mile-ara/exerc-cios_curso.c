/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_if.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milenaaraujorodrigues2102 <milenaaraujo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 21:11:37 by milenaarauj       #+#    #+#             */
/*   Updated: 2025/10/16 21:15:50 by milenaarauj      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void main()
{
    int n;
    float r;
    printf("Digite um numero inteiro:");
    scanf("%d", &n);
    printf("Digite um numero real:");
    scanf("%f", &r);
    printf("Voce digitou um numero inteiro %d e um numero real %.1f", n, r);
}