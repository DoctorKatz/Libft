/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgunship <lgunship@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 23:01:53 by lgunship          #+#    #+#             */
/*   Updated: 2019/09/19 23:01:56 by lgunship         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int count_str;

	count_str = 0;
	while ((s1[count_str] == s2[count_str]) \
			&& (s1[count_str + 1] != '0') && (s2[count_str + 1]) != '\0')
		count_str++;
	if (s1[count_str] != s2[count_str])
	{
		return (s1[count_str] - s2[count_str]);
	}
	else
		return (0);
}

