/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 03:57:32 by viwade            #+#    #+#             */
/*   Updated: 2018/10/30 18:41:48 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*fn_strncat(char *dest, char *src, int nb)
{
	char	*cpy;

	cpy = dest;
	if (!dest || !src)
		return (NULL);
	while (*dest)
		dest++;
	while (*src && nb-- > 0)
		*dest = *src;
	return (cpy);
}
