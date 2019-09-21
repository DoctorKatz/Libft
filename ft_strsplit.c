/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgunship <lgunship@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 03:03:50 by lgunship          #+#    #+#             */
/*   Updated: 2019/09/21 03:22:31 by lgunship         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ln_word(const char *str, int count, char c);

char	**ft_strsplit(const char *str, char c)
{
	char	**res;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if ((res = malloc(8 * (ft_count_word(str, c) + 1))) == NULL)
		return (NULL);
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		if (str[i])
		{
			k = 0;
			if ((res[j] = malloc(8 * ln_word(str, i, c) + 1)) == NULL)
				return (NULL);
			while (str[i] != c && str[i])
				res[j][k++] = str[i++];
			res[j++][k] = '\0';
		}
	}
	res[j] = NULL;
	return (res);
}

int		ln_word(const char *str, int count, char c)
{
	while (str[count] != c && str[count])
	{
		count++;
	}
	return (count);
}

