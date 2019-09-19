/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgunship <lgunship@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 22:50:22 by lgunship          #+#    #+#             */
/*   Updated: 2019/09/19 22:50:22 by lgunship         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, const char *src)
{
	int count_x;
	int count_y;

	count_x = 0;
	count_y = 0;
	while (dest[count_x])
		count_x++;
	while (src[count_y])
	{
		dest[count_x + count_y] = src[count_y];
		count_y++;
	}
	dest[count_x + count_y] = '\0';
	return (dest);
}

