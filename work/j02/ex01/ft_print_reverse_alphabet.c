/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarbone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 18:42:17 by jcarbone          #+#    #+#             */
/*   Updated: 2017/08/04 10:24:35 by jcarbone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_putchar(int c);

void		ft_print_reverse_alphabet(void)
{
	char revlettre;

	revlettre = 'z';
	while (revlettre >= 'a')
	{
		ft_putchar(revlettre);
		revlettre--;
	}
}
