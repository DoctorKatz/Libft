/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgunship <lgunship@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 23:55:02 by lgunship          #+#    #+#             */
/*   Updated: 2019/09/18 23:55:02 by lgunship         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	while (n-- > 0)
	{
		s++;
		if (*(int *) s == c)
			return (void *) s;
	}
	return (NULL);
}
