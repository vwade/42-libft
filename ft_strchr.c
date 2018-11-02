/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 03:44:09 by viwade            #+#    #+#             */
/*   Updated: 2018/11/02 03:49:08 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	*p;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		p = &((unsigned char *)s)[i];
		if ((unsigned char)c == p[0])
			return ((char *)p);
		i++;
	}
	return (NULL);
}
