/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarbone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 17:06:06 by jcarbone          #+#    #+#             */
/*   Updated: 2017/08/07 19:32:06 by jcarbone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int nb)
{
	int i;

	i = 0;
	while (i < nb)
	{
		if (nb < 0)
			return (0);
		else
		{
			if (i * i == nb)
				return (i);
			else
				i++;
		}
	}
	return (i);
}

int ft_is_prime(int nb)
{
	int i;
	int prime;
	int limite;

	i = nb - 1;
	limite = ft_sqrt(nb);
	if (nb == 0 || nb == 1)
		prime = 0;
	else
	{
		while (i != limite)
		{
			if (nb % i == 0 || nb == 9)
			{
				prime = 0;
			}
			else
			{
				prime = 1;
			}
			i--;
		}
	}
	return (prime);
}

int		main()
{
	int nb;
	int result;
	scanf("%d", &nb);
	result = ft_is_prime(nb);
	printf("%d", result);
	return 0;
}
