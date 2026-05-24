/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 16:40:26 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/20 16:53:58 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	get_total(int size, char **strs, char *sep)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	total += (size - 1) * ft_strlen(sep);
	return (total);
}

void	put_str(char *dest, char *src, int *k)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[*k] = src[i];
		i++;
		(*k)++;
	}
}

void	fill_result(char *result, int size, char **strs, char *sep)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		put_str(result, strs[i], &k);
		if (i < size - 1)
			put_str(result, sep, &k);
		i++;
	}
	result[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;

	if (size == 0)
	{
		result = malloc(sizeof(char));
		result[0] = '\0';
		return (result);
	}
	result = malloc(sizeof(char) * (get_total(size, strs, sep) + 1));
	if (result == NULL)
		return (NULL);
	fill_result(result, size, strs, sep);
	return (result);
}
/*
int	main(void)
{
	char	*strs[3];
	char	*sep;
	char	*new_str;

	strs[0] = "Hello";
	strs[1] = "World";
	strs[2] = "42";
	sep = " ";
	new_str = ft_strjoin(3, strs, sep);
	printf("%s\n", new_str);
	free(new_str);
	return (0);
}
*/
