/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgunship <lgunship@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 23:59:47 by lgunship          #+#    #+#             */
/*   Updated: 2019/09/21 01:27:47 by lgunship         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*ptrdest;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	ptrdest = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (ptrdest == NULL)
		return (NULL);
	while (s[i++])
	{
		ptrdest[i] = f(s[i]);
	}
	ptrdest[i + 1] = '\0';
	return (ptrdest);
}
