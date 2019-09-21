/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgunship <lgunship@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 00:38:22 by lgunship          #+#    #+#             */
/*   Updated: 2019/09/20 21:23:37 by lgunship         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *strnstr(const char *haystack, const char *needle, size_t len)
{
	int count_str;
	int count_find;

	count_str = 0;
	while (haystack[count_str] != '\0' || (len > 0))
	{
		count_find = 0;
		while ((needle[count_find] == haystack[count_str + count_find]))
		{
			if (needle[count_find + 1] == '\0')
				return ((char *)haystack + count_str);
			count_find++;
		}
		count_str++;
		len--;
	}
	return (NULL);
}