/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 17:08:01 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/09 17:29:53 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	int_print(int c)
{
	if (c < 10)
	{
		char m = c + '0';
		write(1, &m, 1);
	}
	else
	{
		int div = c / 10;
		int rem = c % 10; 
		
		int_print(div);
		ft_putchar(rem + '0');
		
	}

}

int main(void)
{
	int_print(25);
	return (0);
}
