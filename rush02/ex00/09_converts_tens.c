/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_converts_tens.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 19:21:56 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/23 19:21:58 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*get_tens(char *n, t_dict *dict, int size)
{
	char	key[3];

	key[0] = n[0];
	key[1] = n[1];
	key[2] = '\0';
	return (dict_get(dict, size, key));
}
