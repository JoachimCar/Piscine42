/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarbone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 10:28:47 by jcarbone          #+#    #+#             */
/*   Updated: 2017/08/04 14:41:33 by jcarbone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			more_putchar(int a, int b, int c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	return (0);
}

void		pon_putchar(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void		ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 48;
	while (a <= 55)
	{
		b = a + 1;
		while (b <= 56)
		{
			c = b + 1;
			while (c <= 57)
			{
				more_putchar(a, b, c);
				c++;
				if (a != 55)
				{
					pon_putchar();
				}
			}
			b++;
		}
		a++;
	}
}
