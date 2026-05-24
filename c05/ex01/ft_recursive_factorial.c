/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 18:56:39 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/15 19:09:01 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb != 1)
	{
		return (nb *= ft_recursive_factorial(nb - 1));
	}
	else
		return (nb);
}
/*
int	main(void)
{
	int	num;
	int	ans;

	num = 6;
	ans = ft_recursive_factorial(num);
	printf("Ans: %d", ans);
	return (0);
}
*/
