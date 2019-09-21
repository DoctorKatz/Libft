/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgunship <lgunship@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 23:00:55 by lgunship          #+#    #+#             */
/*   Updated: 2019/09/20 21:29:51 by lgunship         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *haystack, const char *needle)
{
	int count_haystack;
	int count_needle;

	count_haystack = 0;
	while (haystack[count_haystack] != '\0')
	{
		count_needle = 0;
		while (needle[count_needle] == haystack[count_haystack + count_needle])
		{
			if (needle[count_needle + 1] == '\0')
				return (haystack + count_haystack);
			count_needle++;
		}
		count_haystack++;
	}
	return (0);
}

