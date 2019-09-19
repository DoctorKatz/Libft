/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgunship <lgunship@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 23:59:47 by lgunship          #+#    #+#             */
/*   Updated: 2019/09/19 23:59:51 by lgunship         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *mass;
	int count;

	count = 0;
	mass = (int*)malloc(sizeof(int) * length);
	while (length--)
	{
		mass[count] = f(*tab++);
		count++;
	}
	return (mass);
}
