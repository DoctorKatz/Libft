/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgunship <lgunship@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 23:01:54 by lgunship          #+#    #+#             */
/*   Updated: 2019/09/18 23:35:22 by lgunship         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	void *temp;

	temp = dest;
	dest = (int *) malloc(n * sizeof(int));
	while (n-- > 0)
	{
		//    	TODO: работает ли это сравнение? Или через dest[i]?
		if (*((int *) dest) == c)
			return dest++;
		*((int *) dest++) = *((int *) src++);
	}
	return (NULL);
}
