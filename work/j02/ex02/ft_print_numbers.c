/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarbone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 18:08:32 by jcarbone          #+#    #+#             */
/*   Updated: 2017/08/04 10:26:34 by jcarbone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_putchar(int c);

void		ft_print_numbers(void)
{
	int chiffre;

	chiffre = 48;
	while (chiffre <= 57)
	{
		ft_putchar(chiffre);
		chiffre++;
	}
}
