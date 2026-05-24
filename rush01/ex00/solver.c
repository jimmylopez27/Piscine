/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 14:58:42 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/16 15:46:55 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_clues(int **m);

int	check_row(int **m, int r, int n)
{
	int	i;

	i = 1;
	while (i < 5)
	{
		if (m[r][i] == n)
			return (0);
		i++;
	}
	return (1);
}

int	check_col(int **m, int c, int n)
{
	int	i;

	i = 1;
	while (i < 5)
	{
		if (m[i][c] == n)
			return (0);
		i++;
	}
	return (1);
}

int	solve(int **m, int r, int c)
{
	int	n;

	if (r == 5)
		return (check_clues(m));
	if (c == 5)
		return (solve(m, r + 1, 1));
	if (r == 0 || r == 5 || c == 0 || c == 5)
		return (solve(m, r, c + 1));
	if (m[r][c] != 0)
		return (solve(m, r, c + 1));
	n = 1;
	while (n <= 4)
	{
		if (check_row(m, r, n) && check_col(m, c, n))
		{
			m[r][c] = n;
			if (solve(m, r, c + 1))
				return (1);
			m[r][c] = 0;
		}
		n++;
	}
	return (0);
}

int	solve_matrix(int **m)
{
	return (solve(m, 1, 1));
}
