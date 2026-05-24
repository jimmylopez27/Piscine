/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   13_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 19:22:37 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/23 19:22:40 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

char	*ft_strdup(char *s)
{
	int		i;
	char	*d;

	i = 0;
	d = malloc(ft_strlen(s) + 1);
	if (!d)
		return (NULL);
	while (s[i])
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

static int	is_space(char c)
{
	return (c == ' ' || c == '\t');
}

char	*ft_strtrim(char *s)
{
	int		start;
	int		end;
	int		i;
	char	*out;

	start = 0;
	end = ft_strlen(s) - 1;
	i = 0;
	while (s[start] && is_space(s[start]))
		start++;
	while (end > start && is_space(s[end]))
		end--;
	out = malloc(end - start + 2);
	if (!out)
		return (NULL);
	while (start <= end)
		out[i++] = s[start++];
	out[i] = '\0';
	return (out);
}
