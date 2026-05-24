/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 19:22:59 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/23 19:22:59 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

static void	print_str(char *s)
{
	int	i;

	i = 0;
	while (s && s[i])
		write(1, &s[i++], 1);
}

static int	is_zero(char *s)
{
	int	i;

	i = 0;
	if (!s || s[0] == '\0')
		return (0);
	while (s[i])
	{
		if (s[i] != '0')
			return (0);
		i++;
	}
	return (1);
}

static t_dict	*validate_dict(int ac, char **av, int *size)
{
	char	*file_path;
	char	*file;
	char	**lines;
	t_dict	*dict;

	if (ac == 3)
		file_path = av[1];
	else
		file_path = "numbers.dict";
	file = read_file(file_path);
	if (!file)
		return (NULL);
	lines = split_lines(file);
	if (!lines)
		return (NULL);
	dict = parse_dict(lines, size);
	return (dict);
}

int	main(int ac, char **av)
{
	t_dict	*dict;
	int		size;
	char	*direct;

	if (ac < 2 || ac > 3 || !is_valid_number(av[ac - 1]))
		return (write(1, "Error\n", 6), 0);
	dict = validate_dict(ac, av, &size);
	if (!dict)
		return (write(1, "Dict Error\n", 11), 0);
	direct = dict_get(dict, size, av[ac - 1]);
	if (direct)
	{
		print_str(direct);
		return (write(1, "\n", 1), free_dict(dict, size), 0);
	}
	if (is_zero(av[ac - 1]))
	{
		direct = dict_get(dict, size, "0");
		if (direct)
			print_str(direct);
		return (write(1, "\n", 1), free_dict(dict, size), 0);
	}
	convert_number(av[ac - 1], dict, size);
	free_dict(dict, size);
	return (0);
}
