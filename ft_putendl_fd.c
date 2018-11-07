/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 19:07:14 by viwade            #+#    #+#             */
/*   Updated: 2018/11/07 07:34:07 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char const *s, int fd)
{
	if ((unsigned)fd != 0xFFFFFFFF)
	{
		s = ft_strjoin(s, "\n");
		write(fd, s, ft_strlen(s));
		ft_strdel((char **)&s);
	}
}
