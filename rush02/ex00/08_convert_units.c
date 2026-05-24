/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_convert_units.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 19:21:48 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/23 19:21:50 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*get_unit(char c, t_dict *dict, int size)
{
	char	key[2];

	key[0] = c;
	key[1] = '\0';
	return (dict_get(dict, size, key));
}
