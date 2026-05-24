/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_convert_hundreds.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 19:22:04 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/23 19:22:05 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	convert_hundreds(char *g, t_dict *dict, int size, int *first)
{
	char	*w;
	char	temp[2];

	if (g[0] != '0')
	{
		temp[0] = g[0];
		temp[1] = '\0';
		w = dict_get(dict, size, temp);
		if (!*first)
			write(1, " ", 1);
		print_word(w);
		*first = 0;
		w = dict_get(dict, size, "100");
		write(1, " ", 1);
		print_word(w);
	}
}

static void	handle_tens_2(char *g, t_dict *dict, int size, int *first)
{
	char	*w;
	char	key[3];
	char	ukey[2];

	key[0] = g[1];
	key[1] = '0';
	key[2] = '\0';
	ukey[0] = g[2];
	ukey[1] = '\0';
	if (g[1] >= '2')
	{
		if (!*first)
			write(1, " ", 1);
		*first = 0;
		w = dict_get(dict, size, key);
		print_word(w);
	}
	if (g[2] != '0')
	{
		if (!*first)
			write(1, " ", 1);
		*first = 0;
		w = dict_get(dict, size, ukey);
		print_word(w);
	}
}

void	handle_tens(char *g, t_dict *dict, int size, int *first)
{
	char	*w;

	if (g[1] == '1')
	{
		if (!*first)
			write(1, " ", 1);
		*first = 0;
		w = dict_get(dict, size, g + 1);
		print_word(w);
	}
	else
		handle_tens_2(g, dict, size, first);
}
