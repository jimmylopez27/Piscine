/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_dictionary_lookup.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 19:21:39 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/23 19:21:42 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*dict_get(t_dict *dict, int size, char *key)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (ft_strcmp(dict[i].key, key) == 0)
			return (dict[i].value);
		i++;
	}
	return (NULL);
}
