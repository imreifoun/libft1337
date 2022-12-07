/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areifoun <areifoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 23:00:09 by areifoun          #+#    #+#             */
/*   Updated: 2022/11/18 00:50:29 by areifoun         ###   ########.fr       */
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

void	ft_putnbr_fd(int n, int fd)
{
	int		len;
	char	str[12];
	int		negv;

	negv = (n < 0);
	ft_bzero(str, 12);
	len = 0;
	if (n == 0)
		str[len] = '0';
	while (n != 0)
	{
		str[len++] = '0' + ft_abs(n % 10, negv);
		n /= 10;
	}
	if (negv)
		str[len] = '-';
	else if (len > 0)
		len--;
	while (len >= 0)
		write(fd, &str[len--], 1);
}
