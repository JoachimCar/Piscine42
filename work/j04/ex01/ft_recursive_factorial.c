/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarbone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 10:35:06 by jcarbone          #+#    #+#             */
/*   Updated: 2017/08/07 10:51:37 by jcarbone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int fact;

	if (nb > 0)
		return (nb * ft_recursive_factorial(nb - 1));
	else
	{
		if (nb == 0)
			return (1);
		else
			return (0);
	}
}
