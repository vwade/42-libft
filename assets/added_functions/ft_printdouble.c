/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdouble.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 07:18:13 by viwade            #+#    #+#             */
/*   Updated: 2019/05/03 01:05:35 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_core/libft.h"
#include <unistd.h>
#define D_MASK (0xFFFFFFFF00000000u)

static void
	print_decimal(double n)
{
	while (n)
	{
		write(1, (char[1]){(long)(n * 10) % 10 + 48}, 1);
		n = n * 10 - (long)(n * 10);
	}
}

void
	ft_printdouble(double n)
{
	ft_putnbr((long)n);
	write(1, ".", 1);
	print_decimal(ABS(n - (long)n));
}
