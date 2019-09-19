/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgunship <lgunship@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 00:31:08 by lgunship          #+#    #+#             */
/*   Updated: 2019/09/20 00:31:36 by lgunship         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char *strrchr(const char *s, int c)
{
	int count;
	char *ptemp;

	count = ft_strlen(s);
	ptemp = (char *)s;
	while(count > 0)
	{
		if(s[count] == c)
			return (ptemp + count);
		count--;
	}
	return (NULL);
}

