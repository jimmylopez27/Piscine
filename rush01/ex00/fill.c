/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 14:45:06 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/16 15:06:25 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	fill_top(int **m, char *s, int *k)
{
	int	i;

	i = 1;
	while (i < 5)
	{
		m[0][i] = s[*k] - '0';
		*k += 2;
		i++;
	}
}

void	fill_bottom(int **m, char *s, int *k)
{
	int	i;

	i = 1;
	while (i < 5)
	{
		m[5][i] = s[*k] - '0';
		*k += 2;
		i++;
	}
}

void	fill_left(int **m, char *s, int *k)
{
	int	i;

	i = 1;
	while (i < 5)
	{
		m[i][0] = s[*k] - '0';
		*k += 2;
		i++;
	}
}

void	fill_right(int **m, char *s, int *k)
{
	int	i;

	i = 1;
	while (i < 5)
	{
		m[i][5] = s[*k] - '0';
		*k += 2;
		i++;
	}
}

void	fill_all(int **m, char *s)
{
	int	k;

	k = 0;
	fill_top(m, s, &k);
	fill_bottom(m, s, &k);
	fill_left(m, s, &k);
	fill_right(m, s, &k);
}
