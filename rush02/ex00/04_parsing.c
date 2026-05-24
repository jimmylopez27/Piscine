/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 19:20:50 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/23 19:21:18 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

static int	count_lines(char *s)
{
	int	i;
	int	c;

	i = 0;
	c = 1;
	while (s[i])
	{
		if (s[i] == '\n')
			c++;
		i++;
	}
	return (c);
}

char	**split_lines(char *s)
{
	char	**arr;
	int		i;
	int		j;
	int		start;

	i = 0;
	j = 0;
	start = 0;
	arr = malloc(sizeof(char *) * (count_lines(s) + 1));
	if (!arr)
		return (NULL);
	while (s[i])
	{
		if (s[i] == '\n')
		{
			s[i] = '\0';
			arr[j++] = ft_strdup(&s[start]);
			start = i + 1;
		}
		i++;
	}
	arr[j++] = ft_strdup(&s[start]);
	arr[j] = NULL;
	return (arr);
}
