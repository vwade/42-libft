/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 04:28:50 by viwade            #+#    #+#             */
/*   Updated: 2018/11/15 00:33:59 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*new;

	if ((new = (t_list *)malloc(sizeof(*new))))
		if ((new->content = ft_memalloc(content_size)))
		{
			new->content = ft_memcpy(new->content, content, content_size);
			new->content_size = (content) ? content_size : 0;
			new->next = NULL;
		}
	return (new);
}
