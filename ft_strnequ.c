/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgunship <lgunship@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 01:36:52 by lgunship          #+#    #+#             */
/*   Updated: 2019/09/21 01:39:41 by lgunship         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
	while (s1 && s2 && (n-- > 0))
	{
		if (*s1++ == *s2++)
			return (1);
	}
	return (0);
}
