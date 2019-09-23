/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgunship <lgunship@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 00:14:41 by lgunship          #+#    #+#             */
/*   Updated: 2019/09/23 23:30:38 by lgunship         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	counter;

	if (!(str1 = (char *)s1) ||
		!(str2 = (char *)s2))
		return (0);
	if (n == 0)
		return (0);
	counter = 0;
	while ((str1[counter] == str2[counter]) && (counter + 1 < n))
		counter++;
	return ((str1[counter] - str2[counter]));
}