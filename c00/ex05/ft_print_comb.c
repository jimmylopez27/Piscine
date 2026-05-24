/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 19:27:23 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/09 12:37:56 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_writer(char m)
{
	write(1, &m, 1);
}

void	ft_print_com(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 9)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_writer(a + '0');
				ft_writer(b + '0');
				ft_writer(c + '0');
				if (!(a == 7 && b == 8 & c == 9))
					write(1, ", ", 1);
				c++;
			}
			b++;
		}
		a++;
	}
}
