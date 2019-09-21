/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgunship <lgunship@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 00:46:38 by lgunship          #+#    #+#             */
/*   Updated: 2019/09/21 00:49:35 by lgunship         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char * ft_strnew(size_t size)
{
	char *ptr;

	if(!size)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * size);
	if (!ptr)
	{
		ft_bzero(ptr, size);
		*(ptr + 1) = '\0';
		return (ptr);
	}
}

