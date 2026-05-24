/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11_convert_large.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 19:22:12 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/23 19:22:12 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

static int	len(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static void	get_group(char *n, char *buf, int g)
{
	int	l;
	int	start;
	int	i;

	l = len(n);
	start = l - (g * 3);
	i = 0;
	while (i < 3)
	{
		if (start + i >= 0 && start + i < l)
			buf[i] = n[start + i];
		else
			buf[i] = '0';
		i++;
	}
	buf[i] = '\0';
}

static char	*get_scale_key(int g)
{
	if (g == 1)
		return ("1000");
	if (g == 2)
		return ("1000000");
	if (g == 3)
		return ("1000000000");
	if (g == 4)
		return ("1000000000000");
	if (g == 5)
		return ("1000000000000000");
	if (g == 6)
		return ("1000000000000000000");
	if (g == 7)
		return ("1000000000000000000000");
	if (g == 8)
		return ("1000000000000000000000000");
	if (g == 9)
		return ("1000000000000000000000000000");
	if (g == 10)
		return ("1000000000000000000000000000000");
	if (g == 11)
		return ("1000000000000000000000000000000000");
	return ("1000000000000000000000000000000000000");
}

static void	print_scale(char *buf, char *word, int *first)
{
	int	has_value;

	has_value = !(buf[0] == '0' && buf[1] == '0' && buf[2] == '0');
	if (word && has_value)
	{
		if (!*first)
			write(1, " ", 1);
		*first = 0;
		print_word(word);
	}
}

int	convert_number(char *n, t_dict *dict, int size)
{
	char	buf[4];
	int		groups;
	int		g;
	int		first;

	first = 1;
	groups = (len(n) + 2) / 3;
	g = groups;
	while (g > 0)
	{
		get_group(n, buf, g);
		convert_hundreds(buf, dict, size, &first);
		handle_tens(buf, dict, size, &first);
		if (g - 1 > 0)
			print_scale(buf, dict_get(dict, size, get_scale_key(g - 1)),
				&first);
		g--;
	}
	write(1, "\n", 1);
	return (1);
}
