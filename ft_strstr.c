/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgunship <lgunship@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 23:00:55 by lgunship          #+#    #+#             */
/*   Updated: 2019/09/19 23:00:55 by lgunship         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, const char *to_find)
{
	int count_str;
	int count_find;

	count_str = 0;
	while (str[count_str] != '\0')
	{
		count_find = 0;
		while (to_find[count_find] == str[count_str + count_find])
		{
			if (to_find[count_find + 1] == '\0')
				return (str + count_str);
			count_find++;
		}
		count_str++;
	}
	return (0);
}

