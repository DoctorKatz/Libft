/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgunship <lgunship@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 23:02:50 by lgunship          #+#    #+#             */
/*   Updated: 2019/09/19 23:02:53 by lgunship         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int count_str;

	count_str = 0;
	while (count_str < n && (s1[count_str + 1] \
				!= '0' || s2[count_str + 1] != '\0'))
	{
		count_str++;
		if (s1[count_str] != s2[count_str])
		{
			return (s1[count_str] - s2[count_str]);
		}
	}
	return (0);
}

