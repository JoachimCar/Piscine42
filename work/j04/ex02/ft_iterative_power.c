/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarbone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 10:52:57 by jcarbone          #+#    #+#             */
/*   Updated: 2017/08/07 14:48:12 by jcarbone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int result;
	int i;

	i = 1;
	result = 1;
	if (power > 0)
	{
		while (i <= power)
		{
			result = result * nb;
			i++;
		}
	}
	else
	{
		if (nb == 0)
			return (0);
		else
		{
			if (power == 0)
				return (1);
			else
				return (0);
		}
	}
	return (result);
}
