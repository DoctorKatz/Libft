/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgunship <lgunship@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 03:49:22 by lgunship          #+#    #+#             */
/*   Updated: 2019/09/21 03:49:22 by lgunship         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendlfd(char const *s, int fd)
{
	if (!s)
		return;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n'. fd);
}
