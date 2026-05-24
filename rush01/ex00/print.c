/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 14:44:26 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/16 15:09:11 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_matrix(int **m)
{
	int	i;
	int	j;

	i = 1;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			ft_putchar(m[i][j] + '0');
			if (j < 4)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
