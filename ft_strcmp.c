/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 22:00:06 by viwade            #+#    #+#             */
/*   Updated: 2018/11/12 14:58:59 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	if (!s1 || !s2)
		ft_die("");
	while (*s1 == *s2)
		if (!*s1++ || !*s2++)
			return (0);
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}
