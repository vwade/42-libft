/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 05:43:09 by viwade            #+#    #+#             */
/*   Updated: 2020/01/21 13:11:04 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

#define C0	0xff
#define C1	0xffff
#define C2	0xffffff
#define C3	0xffffffff
#define C4	0xffffffffff
#define C5	0xffffffffffff
#define C6	0xffffffffffffff
#define C7	0xffffffffffffffff
#define C_BYTES

static uint64_t
	count_bytes(uint64_t c)
{
	return (
		(c > C0) + (c > C1) + (c > C2) + (c > C3) +
		(c > C4) + (c > C5) + (c > C6) + (c > C7));
}

static void
	put_hex(u_int8_t c)
{
	char	*key;

	key = "0123456789abcdef";
	write(1, (char[2]){key[c >> 4], key[c & 0x0f]}, 2);
}

void
	print_hex(uint64_t c)
{
	uint8_t	i;

	i = 0;
	while (i < 1 + count_bytes(c))
		put_hex(c >> 8 * (count_bytes(c) - i++));
}
