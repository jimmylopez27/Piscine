/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 10:39:58 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/17 12:57:33 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	check_input(char *str);

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	check_input(argv[1]);
	return (0);
}
