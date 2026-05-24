/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 09:45:12 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/17 11:24:47 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	num;

	num = ft_is_prime(nb);
	while (num == 0)
	{
		nb++;
		num = ft_is_prime(nb);
	}
	return (nb);
}
/*
int	main(void)
{
	int	nb;
	int	ans;

	nb = 33;
	ans = printf("Ans: %d\n", ft_find_next_prime(nb));
	return (0);
}
*/
