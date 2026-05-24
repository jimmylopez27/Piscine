/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 16:16:39 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/06 20:28:23 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int		counter;
	char	m;

	counter = 122;
	while (counter >= 97)
	{
		m = (char)counter;
		write(1, &m, 1);
		counter--;
	}
}
