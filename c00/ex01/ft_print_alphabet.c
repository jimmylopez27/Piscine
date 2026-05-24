/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 14:34:30 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/06 20:28:18 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int		counter;
	char	m;

	counter = 97;
	while (counter <= 122)
	{
		m = (char)counter;
		write(1, &m, 1);
		counter++;
	}
}
