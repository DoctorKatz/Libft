/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgunship <lgunship@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 02:09:30 by lgunship          #+#    #+#             */
/*   Updated: 2019/09/21 02:21:42 by lgunship         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char * ft_strtrim(char const *s)
{
	char *copy;
	int length;

	if (!s)
		return (NULL);
	length = ft_strlen(s);
	copy = (char *)malloc(sizeof(char) * (length + 1));
	if (!copy)
		return (NULL);
	if ((s[0] == ' ' || s[0] == '\n' || s[0] == '\t'))
		s += 1;
	if ((s[length] == ' ' || s[length] == '\n' || s[length] == '\t'))
		length -= 1;
	while (length-- > 0)
		*(copy++) = *(s++);
	*(copy + 1) = '\0';
	return (copy);
}