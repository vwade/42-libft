/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 18:49:52 by viwade            #+#    #+#             */
/*   Updated: 2019/05/13 18:41:30 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../../libft.h"

char	*ft_strnew(size_t size)
{
	char	*new;

	if ((new = (char *)malloc(++size)))
		ft_bzero(new, size);
	return (new);
}
