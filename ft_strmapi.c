/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgunship <lgunship@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 01:20:48 by lgunship          #+#    #+#             */
/*   Updated: 2019/09/21 01:27:47 by lgunship         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char * ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int	  i;
	char *ptrdest;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	ptrdest = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (ptrdest == NULL)
		return (NULL);
	while (s[i++])
	{
		ptrdest[i] = f(i, s[i]);
	}
	ptrdest[i + 1] = '\0';
	return (ptrdest);
}
