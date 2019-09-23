/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgunship <lgunship@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 22:36:20 by lgunship          #+#    #+#             */
/*   Updated: 2019/09/23 23:17:37 by lgunship         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(const char *str);
char	*ft_strcpy(const char *dest, const char *src);

char	*ft_strdup(char *src)
{
	char *temp;

	temp = (char*)malloc(ft_strlen(src) * sizeof(char) + 1);
	ft_strcpy(temp, src);
	return (temp);
}

int		ft_strlen(const char *str)
{
	int count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_strcpy(const char *dest, const char *src)
{
	int count_src;
	char *temp;

	count_src = 0;
	temp = (char *)dest;
	while (src[count_src])
	{
		temp[count_src] = src[count_src];
		count_src++;
	}
	temp[count_src] = '\0';
	return (temp);
}


