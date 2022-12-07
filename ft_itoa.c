/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areifoun <areifoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 23:19:28 by areifoun          #+#    #+#             */
/*   Updated: 2022/11/18 00:49:35 by areifoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int x, int negv)
{
	if (negv)
		return (-x);
	else
		return (x);
}

static int	ft_count(int re, int negv)
{
	int	count;

	if (re == 0)
		return (count = 1);
	count = 0;
	while (re != 0)
	{
		re = re / 10;
		count++;
	}
	if (negv)
		return (count + 1);
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		count;
	int		negv;

	negv = (n < 0);
	count = ft_count(n, negv);
	str = (char *)malloc(sizeof(char) * count + 1);
	if (!str)
		return (NULL);
	ft_bzero(str, count + 1);
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (negv)
		str[0] = '-';
	while (n != 0)
	{
		str[count - 1] = '0' + ft_abs(n % 10, negv);
		n = n / 10;
		count--;
	}
	return (str);
}
