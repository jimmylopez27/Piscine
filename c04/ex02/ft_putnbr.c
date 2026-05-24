/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 11:03:25 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/14 17:24:16 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	num[10];
	int		i;

	i = 0;
	if (nb == -2147483648)
		return (write(1, "-2147483648", 11), (void)0);
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb == 0)
		return (ft_putchar('0'));
	while (nb > 0)
	{
		num[i++] = (nb % 10) + '0';
		nb /= 10;
	}
	while (i > 0)
		ft_putchar(num[--i]);
}
/*
int	main(void)
{
	ft_putnbr(1995);
	ft_putchar('\n');
	ft_putnbr(-42);
	ft_putchar('\n');
	return (0);
}
*/
