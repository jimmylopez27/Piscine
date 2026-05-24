/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 18:30:24 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/17 09:20:35 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return ((int)i);
	return (0);
}
/*
int	main(void)
{
	int	num;
	int	ans;

	num = 10;
	ans = ft_sqrt(num);
	printf("The square root of %d is: %d", num, ans);
	return (0);
}
*/
