/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgunship <lgunship@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 00:26:53 by lgunship          #+#    #+#             */
/*   Updated: 2019/09/20 00:31:36 by lgunship         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

char *strchr(const char *s, int c)
{
	int count;
	char *ptemp;

	count= 0;
	ptemp = (char *)s;
	while(s[count])
	{
		if(s[count] == c)
			return (ptemp + count);
		count++;
	}
	return (NULL);
}

