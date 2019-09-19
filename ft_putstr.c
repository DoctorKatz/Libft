/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgunship <lgunship@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 00:02:32 by lgunship          #+#    #+#             */
/*   Updated: 2019/09/20 00:02:32 by lgunship         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(const char *str)
{
	int count;

	count = 0;
	while (str[count])
	{
		ft_putchar(str[count]);
		count++;
	}
}
