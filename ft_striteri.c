/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgunship <lgunship@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 01:03:33 by lgunship          #+#    #+#             */
/*   Updated: 2019/09/21 01:10:31 by lgunship         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int count;

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	if (s == NULL || f == NULL)
		return ;
	while (s[count++])
	{
		f(count, s + count);
	}
}