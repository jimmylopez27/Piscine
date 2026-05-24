/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 09:31:19 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/07 10:29:27 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	counter;
	int	n;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	n = 0;
	while (n < counter)
	{
		write(1, &str[n], 1);
		n++;
	}
}
