/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgunship <lgunship@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 22:39:19 by lgunship          #+#    #+#             */
/*   Updated: 2019/09/19 22:40:52 by lgunship         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	int count_src;

	count_src = 0;
	while (n > 0)
	{
		dest[count_src] = src[count_src];
		count_src++;
		n--;
	}
	dest[count_src] = '\0';
	return (dest);
}

