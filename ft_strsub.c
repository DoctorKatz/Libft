/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgunship <lgunship@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 01:44:36 by lgunship          #+#    #+#             */
/*   Updated: 2019/09/21 01:52:34 by lgunship         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	int temp_len;
	char *subs;

	temp_len = len;
	subs = (char *)malloc(sizeof(char) * (len + 1));
	if(!subs)
		return (NULL);
	if (!s || !start || !len)
		return (NULL);
	while (temp_len-- > 0)
	{
		*(subs++) = s[start++];
	}
	*(subs + 1) = '\0';
	return (subs - (len + 1));
}

