/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: null <null@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 17:31:23 by null              #+#    #+#             */
/*   Updated: 2019/09/19 17:57:39 by null             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	dst	 = (char *) malloc(sizeof(char) * size);
	size = size - 1;
	while (size-- > 0)
	{
		*(dst++) = *(src++);
	}
	*(dst++) = '\0';
	return (ft_strlen(*src) + ft_strlen(*dst));
}