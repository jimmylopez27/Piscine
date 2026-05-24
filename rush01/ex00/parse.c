/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 14:46:03 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/16 17:00:22 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		validate_input(char *s);
int		**main_matrix(void);
void	fill_all(int **m, char *s);
int		solve_matrix(int **m);
void	print_matrix(int **m);
void	free_matrix(int **m);

void	get_argv(char *s)
{
	int	**m;

	if (validate_input(s) == 0)
	{
		write(1, "Error\n", 6);
		return ;
	}
	m = main_matrix();
	if (!m)
		return ;
	fill_all(m, s);
	if (!solve_matrix(m))
	{
		write(1, "Error\n", 6);
		free_matrix(m);
		return ;
	}
	print_matrix(m);
	free_matrix(m);
}
