/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgunship <lgunship@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 00:21:39 by lgunship          #+#    #+#             */
/*   Updated: 2019/09/20 00:22:51 by lgunship         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char *strncat(char *dest, const char *src, size_t n)
{
	int count_x;
	int count_y;

	count_x = 0;
	count_y = 0;
	while (dest[count_x])
		count_x++;
	while (src[count_y] || n-- > 0)
	{
		dest[count_x + count_y] = src[count_y];
		count_y++;
		n--;
	}
	dest[count_x + count_y] = '\0';
	return (dest);
}
