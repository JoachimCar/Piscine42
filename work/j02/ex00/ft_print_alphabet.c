/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarbone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 17:28:20 by jcarbone          #+#    #+#             */
/*   Updated: 2017/08/04 10:17:45 by jcarbone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_putchar(int c);

void		ft_print_alphabet(void)
{
	int lettre;

	lettre = 97;
	while (lettre <= 122)
	{
		ft_putchar(lettre);
		lettre++;
	}
}
