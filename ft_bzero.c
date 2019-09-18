/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgunship <lgunship@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 21:48:39 by lgunship          #+#    #+#             */
/*   Updated: 2019/09/18 23:15:00 by lgunship         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void ft_bzero(void *point , size_t  num )
{
    unsigned char *ptr;

    ptr = (unsigned char *)point;
    while(num-- > 0)
        *(ptr++) = 0;
}