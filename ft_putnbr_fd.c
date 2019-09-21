/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgunship <lgunship@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 03:50:59 by lgunship          #+#    #+#             */
/*   Updated: 2019/09/21 03:50:59 by lgunship         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*tmp;

	if ((tmp = ft_itoa(n)))
	{
		ft_putstr_fd(tmp, fd);
		ft_strdel(&tmp);
	}
}