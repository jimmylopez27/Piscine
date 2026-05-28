/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 20:44:14 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/24 16:04:03 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*copy;

	copy = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

void	free_all(struct s_stock_str *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(tab[i].copy);
		i++;
	}
	free(tab);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*tab;

	tab = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		if (tab[i].copy == NULL)
		{
			free_all(tab, i);
			return (NULL);
		}
		i++;
	}
	tab[i].size = 0;
	tab[i].str = 0;
	tab[i].copy = 0;
	return (tab);
}
/*
#include <stdio.h>

int	main(void)
{
		int                     i;
		int                     ac;
		char                    *av[] = {"Hello", "World", "42"};
		struct s_stock_str      *tab;

		ac = 3;
		tab = ft_strs_to_tab(ac, av);
		i = 0;
		while (tab[i].str != 0)
		{
				printf("size : %d\n", tab[i].size);
				printf("str  : %s\n", tab[i].str);
				printf("copy : %s\n", tab[i].copy);
				printf("\n");
				i++;
		}
		return (0);
}
*/
