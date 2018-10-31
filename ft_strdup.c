/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 00:08:10 by viwade            #+#    #+#             */
/*   Updated: 2018/10/31 07:06:22 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*len;
	char	*dup;

	if (!src)
		return (NULL);
	len = (char *)src;
	while (*len++)
		;
	if ((dup = (char *)malloc(sizeof(*dup) * (long int)(++len - src))))
		return (ft_strcpy(dup, src));
	else
		return (NULL);
}
