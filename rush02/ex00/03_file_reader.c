/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_file_reader.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 19:20:38 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/23 19:20:42 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

static char	*str_join(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*out;

	i = 0;
	j = 0;
	out = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!out)
		return (NULL);
	while (s1 && s1[i])
	{
		out[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		out[i + j] = s2[j];
		j++;
	}
	out[i + j] = '\0';
	free(s1);
	return (out);
}

char	*read_file(char *path)
{
	int		fd;
	int		r;
	char	buf[1024];
	char	*res;

	res = malloc(1);
	if (!res)
		return (NULL);
	res[0] = '\0';
	fd = open(path, O_RDONLY);
	if (fd < 0)
		return (NULL);
	r = read(fd, buf, 1023);
	while (r > 0)
	{
		buf[r] = '\0';
		res = str_join(res, buf);
		if (!res)
			return (NULL);
		r = read(fd, buf, 1023);
	}
	close(fd);
	return (res);
}
