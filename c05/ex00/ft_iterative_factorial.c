/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 14:25:29 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/15 18:32:32 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;
	int	store;
	int	temp;

	i = 0;
	temp = 0;
	result = 1;
	store = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i < store)
	{
		temp = store - i;
		result *= temp;
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	int	num;

	num = 0;
	num = ft_iterative_factorial(num);
	printf("Fact of 6 is: %d", num);
	return (0);
}
*/
