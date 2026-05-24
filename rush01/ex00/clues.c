/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clues.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 15:45:05 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/16 15:52:49 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	visible(int *line);
int	check_vertical(int **m, int i);
int	check_horizontal(int **m, int i);

int	visible(int *line)
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	while (i < 4)
	{
		if (line[i] > max)
		{
			max = line[i];
			count++;
		}
		i++;
	}
	return (count);
}

int	check_vertical(int **m, int i)
{
	int	line[4];

	line[0] = m[1][i];
	line[1] = m[2][i];
	line[2] = m[3][i];
	line[3] = m[4][i];
	if (visible(line) != m[0][i])
		return (0);
	line[0] = m[4][i];
	line[1] = m[3][i];
	line[2] = m[2][i];
	line[3] = m[1][i];
	if (visible(line) != m[5][i])
		return (0);
	return (1);
}

int	check_horizontal(int **m, int i)
{
	int	line[4];

	line[0] = m[i][1];
	line[1] = m[i][2];
	line[2] = m[i][3];
	line[3] = m[i][4];
	if (visible(line) != m[i][0])
		return (0);
	line[0] = m[i][4];
	line[1] = m[i][3];
	line[2] = m[i][2];
	line[3] = m[i][1];
	if (visible(line) != m[i][5])
		return (0);
	return (1);
}

int	check_clues(int **m)
{
	int	i;

	i = 1;
	while (i < 5)
	{
		if (!check_vertical(m, i))
			return (0);
		if (!check_horizontal(m, i))
			return (0);
		i++;
	}
	return (1);
}
