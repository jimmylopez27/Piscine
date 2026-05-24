/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 16:36:14 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/18 16:55:52 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	i;
	int	*dest;

	if (min >= max)
		return (NULL);
	len = max - min;
	dest = malloc(sizeof(int) * len);
	if (!dest)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
		int     min;
		int     max;
		int     *num_arr;
		int     i;

		min = 2;
		max = 10;
		num_arr = ft_range(min, max);
		i = 0;
		while (i < max - min)
		{
				printf("%d", num_arr[i]);
				i++;
		}
		free(num_arr);
		return (0);
}
*/
