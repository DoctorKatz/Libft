/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgunship <lgunship@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 01:57:11 by lgunship          #+#    #+#             */
/*   Updated: 2019/09/21 02:08:38 by lgunship         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *strjoin;

	strjoin = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s1 || !s2 || !strjoin)
		return (NULL);
	while (s1++)
	{
		*(strjoin++) = *(s1);
	}
	while (s2++)
	{
		*(strjoin++) = *(s1);
	}
	*(strjoin + 1) = '\0';
	return (strjoin - (ft_strlen(s1) + ft_strlen(s2) + 1));
}