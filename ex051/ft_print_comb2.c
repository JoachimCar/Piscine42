/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarbone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 08:56:19 by jcarbone          #+#    #+#             */
/*   Updated: 2017/08/08 10:58:02 by jcarbone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void		display(a, b)
{
	ft_putchar('0' + a / 10);
	ft_putchar('0' + a % 10);
	ft_putchar(' ');
	ft_putchar('0' + b / 10);
	ft_putchar('0' + b % 10);
}

void		ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while ( a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			display(a, b);
			if (a != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		b++;
		}
	a++;
	}
}
