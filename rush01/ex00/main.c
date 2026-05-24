/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 14:38:43 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/16 16:27:49 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	get_argv(char *str);

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	get_argv(argv[1]);
	return (0);
}
