/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_dictionary.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 19:21:29 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/23 19:21:31 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

static char	*get_key(char *l)
{
	int		i;
	char	*k;

	i = 0;
	while (l[i] && l[i] != ':')
		i++;
	k = malloc(i + 1);
	i = 0;
	while (l[i] && l[i] != ':')
	{
		k[i] = l[i];
		i++;
	}
	k[i] = '\0';
	return (ft_strtrim(k));
}

static char	*get_val(char *l)
{
	int	i;

	i = 0;
	while (l[i] && l[i] != ':')
		i++;
	if (l[i] == ':')
		i++;
	return (ft_strtrim(&l[i]));
}

t_dict	*parse_dict(char **lines, int *size)
{
	int		i;
	t_dict	*d;

	i = 0;
	while (lines[i])
		i++;
	*size = i;
	d = malloc(sizeof(t_dict) * i);
	if (!d)
		return (NULL);
	i = 0;
	while (lines[i])
	{
		d[i].key = get_key(lines[i]);
		d[i].value = get_val(lines[i]);
		i++;
	}
	return (d);
}
