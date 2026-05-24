/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 20:56:24 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/15 21:14:23 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power != 0)
	{
		return (nb *= ft_recursive_power(nb, power - 1));
	}
	return (nb);
}
/*
int	main(void)
{
	int	nb;
	int	power;

	nb = 12;
	power = 0;
	printf("Base: %d, Power: %d\nAnswer: %d", nb, power, ft_recursive_power(nb,
			power));
	return (0);
}
*/
