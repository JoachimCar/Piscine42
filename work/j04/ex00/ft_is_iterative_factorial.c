/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_iterative_factorial.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarbone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 08:36:35 by jcarbone          #+#    #+#             */
/*   Updated: 2017/08/07 10:52:08 by jcarbone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fact;

	if (nb > 0)
	{
		fact = nb;
		while (nb > 1)
		{
			nb = nb - 1;
			fact = fact * nb;
		}
	}
	else
	{
		if (nb == 0)
			fact = 1;
		else
			fact = 0;
	}
	return (fact);
}
