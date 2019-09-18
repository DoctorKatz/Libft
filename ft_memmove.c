/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgunship <lgunship@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 23:22:19 by lgunship          #+#    #+#             */
/*   Updated: 2019/09/18 23:37:52 by lgunship         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *ptr1;
	unsigned char *ptr2;
	size_t i;

	ptr1 = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	ptr1 = (unsigned char *)malloc(n * sizeof(n));
	i = 0;
	//TODO: перекрытие памяти (dest накрывает src во время записи, проверить)
	if (ptr2 < ptr1)
		while (++i <= n)
			ptr1[n - i] = ptr2[n - i];
	else
		while(n-- > 0)
			*(ptr1++) = *(ptr2++);
	return (dest);
}
