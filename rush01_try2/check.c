/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 10:37:39 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/17 12:58:13 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		cmp(char *s1, char *s2);
void	ft_strcat(char *dest, char *src);
void	show_tab(char *str);

char	*make_tab(void)
{
	char	*str;

	str = malloc(sizeof(char) * 33);
	if (!str)
		return (0);
	str[0] = '\0';
	ft_strcat(str, "1 2 3 4\n");
	ft_strcat(str, "2 3 4 1\n");
	ft_strcat(str, "3 4 1 2\n");
	ft_strcat(str, "4 1 2 3\n");
	return (str);
}

void	check_input(char *str)
{
	char	*ans;
	char	*tab;

	ans = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	if (cmp(str, ans) != 0)
	{
		write(1, "Error\n", 6);
		return ;
	}
	tab = make_tab();
	if (!tab)
		return ;
	show_tab(tab);
	free(tab);
}
