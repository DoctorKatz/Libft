/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgunship <lgunship@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 00:15:06 by lgunship          #+#    #+#             */
/*   Updated: 2019/09/20 00:15:06 by lgunship         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	dst = (char *) malloc(sizeof(char) * size);
	size = size - 1;
	while (size-- > 0)
	{
		*(dst++) = *(src++);
	}
	*(dst++) = '\0';
	return (ft_strlen(src) + ft_strlen(dst));
}