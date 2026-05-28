/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 12:47:15 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/26 15:09:39 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_seprator(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *sep)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (!is_seprator(str[i], sep))
		{
			words++;
			while (str[i] && !is_seprator(str[i], sep))
			{
				i++;
			}
		}
		else
			i++;
	}
	return (words);
}

char	*word_splitter(char *str, char *sep)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && !is_seprator(str[i], sep))
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (str[i] && !is_seprator(str[i], sep))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**words;

	i = 0;
	j = 0;
	if (str == NULL || charset == NULL)
		return (NULL);
	words = (char **)malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (words == NULL)
		return (NULL);
	while (str[i])
	{
		if (!is_seprator(str[i], charset))
		{
			words[j] = word_splitter(&str[i], charset);
			while (str[i] && !is_seprator(str[i], charset))
				i++;
			j++;
		}
		else
			i++;
	}
	words[j] = 0;
	return (words);
}
