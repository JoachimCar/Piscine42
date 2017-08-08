/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarbone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 15:27:34 by jcarbone          #+#    #+#             */
/*   Updated: 2017/08/06 17:55:44 by jcarbone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strrev(char *str)
{
	strrev(str);
	return (0);
}

int		main(void)
{
	char *str;

	str = "MES COUILLES";
	printf("%s\n", ft_strrev(str));
	return (0);
}
