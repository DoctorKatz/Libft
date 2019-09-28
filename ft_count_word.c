/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgunship <lgunship@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 03:22:41 by lgunship          #+#    #+#             */
/*   Updated: 2019/09/28 08:00:12 by lgunship         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_word(const char *str, char c)
{
	int words_quantity;
	int count;

	count = 0;
	if (!str)
		return (0);
	words_quantity = 0;
	while (str[count])
	{
		if (str[count] == c && str[count + 1] != c)
			words_quantity++;
		count++;
	}
	return (words_quantity);
}