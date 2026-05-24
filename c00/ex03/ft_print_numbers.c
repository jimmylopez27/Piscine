/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 16:51:05 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/06 20:28:28 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		counter;
	char	m;

	counter = 48;
	while (counter <= 57)
	{
		m = (char)counter;
		write(1, &m, 1);
		counter++;
	}
}
