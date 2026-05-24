/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 09:22:30 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/17 11:20:00 by jbalayan         ###   ########.fr       */
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
/*
int	main(void)
{
	int	num1 = 11, num2 = -4, num3;

	num1 = 11, num2 = -4, num3 = 0, num4;
	num1 = 11, num2 = -4, num3 = 0, num4 = 31;
	int	ans1, ans2, ans3, ans4;
	ans1 = ft_is_prime(num1);
	ans2 = ft_is_prime(num2);
	ans3 = ft_is_prime(num3);
	ans4 = ft_is_prime(num4);
	printf("Num %d is %d\n", num1, ans1);
	printf("Num %d is %d\n", num2, ans2);
	printf("Num %d is %d\n", num3, ans3);
	printf("Num %d is %d\n", num4, ans4);
	return (0);
}
*/
