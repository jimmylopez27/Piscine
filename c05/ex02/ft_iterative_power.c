/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 20:39:05 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/15 20:51:02 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	temp;

	i = 1;
	temp = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		nb *= temp;
		i++;
	}
	return (nb);
}
/*
int	main(void)
{
	int	nb;
	int	power;

	nb = 0;
	power = 0;
	printf("N: %d, Power: %d\nAnswer: %d", nb, power, ft_iterative_power(nb,
			power));
	return (0);
}
*/
