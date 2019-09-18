/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgunship <lgunship@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 22:07:29 by lgunship          #+#    #+#             */
/*   Updated: 2019/09/18 23:32:08 by lgunship         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    void *temp;

    temp = dest;
    dest = (unsigned char *)malloc(n * sizeof(n));
    while(n-- > 0)
    {
        *((unsigned char *)dest++) = *((unsigned char *) src++);
    }
    return (temp);
}