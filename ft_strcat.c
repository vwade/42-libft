/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 03:32:00 by viwade            #+#    #+#             */
/*   Updated: 2018/11/10 11:16:55 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int		i;
	char	*dup;

	i = 0;
	if (!dest || !src)
		ft_die("FT_STRCAT: Cannot concatenate. Parameters invalid.");
	dup = dest;
	while (*dup)
		dup++;
	while (src[i++])
		dup[i - 1] = src[i - 1];
	dup[i] = 0;
	return (dest);
}
