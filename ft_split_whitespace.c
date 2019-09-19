/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespace.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgunship <lgunship@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 00:12:49 by lgunship          #+#    #+#             */
/*   Updated: 2019/09/20 00:12:52 by lgunship         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ln_word(char *str, int count);
int		count_word (char *str);
char	**ft_split_whitespaces(char *str);

char	**ft_split_whitespaces(char *str)
{
	char	**res;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if ((res = malloc(sizeof(char*) * (count_word(str) + 1))) == NULL)
		return (NULL);
	while (str[i])
	{
		while ((str[i] == '\t' || str[i] == ' ' || str[i] == '\n') && str[i])
			i++;
		if (str[i])
		{
			k = 0;
			if ((res[j] = malloc(sizeof(char) * ln_word(str, i) + 1)) == NULL)
				return (NULL);
			while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
				res[j][k++] = str[i++];
			res[j++][k] = '\0';
		}
	}
	res[j] = NULL;
	return (res);
}

int		count_word(char *str)
{
	int count;
	int words_quantity;

	count = 0;
	words_quantity = 0;
	while (str[count])
	{
		if ((str[count] == ' ' || str[count] == '\t' || str[count] == '\n') &&\
				(str[count + 1] != ' ' ||\
				str[count + 1] != '\t' || str[count + 1] != '\n'))
		{
			words_quantity++;
		}
		count++;
	}
	return (words_quantity);
}

int		ln_word(char *str, int count)
{
	while (str[count] != '\t' && str[count] != ' '\
			&& str[count] != '\n' && str[count])
	{
		count++;
	}
	return (count);
}

