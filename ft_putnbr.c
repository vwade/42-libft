/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 08:55:29 by viwade            #+#    #+#             */
/*   Updated: 2018/11/13 12:42:49 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void
	ft_putnbr(int n)
{
	int		fd;
	int		len;
	int		tmp;
	char	c;

	fd = 1;
	tmp = n;
	len = 1;
	if ((unsigned)n >= 0x80000000)
		write(fd, "-", 1);
	while (tmp /= 10)
		len *= 10;
	while (len)
	{
		c = ((n < 0) ? -(n / len) : n / len) + 48;
		write(fd, &c, 1);
		n %= len;
		len /= 10;
	}
}
