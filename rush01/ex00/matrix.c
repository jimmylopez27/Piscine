/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 14:39:20 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/16 14:56:31 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	**main_matrix(void)
{
	int	**m;
	int	i;
	int	j;

	m = malloc(sizeof(int *) * 6);
	if (!m)
		return (0);
	i = 0;
	while (i < 6)
	{
		m[i] = malloc(sizeof(int) * 6);
		if (!m[i])
			return (0);
		j = 0;
		while (j < 6)
		{
			m[i][j] = 0;
			j++;
		}
		i++;
	}
	return (m);
}
