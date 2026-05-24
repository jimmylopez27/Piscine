/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 16:33:50 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/14 16:03:48 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && to_find[j] != '\0' && str[i+ j] == to_find[j])
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	str[] = "Hello Jimm joish";
	char	to_find[] = "jimmy"; 
	char	*result;

	result = ft_strstr(str, to_find);
	if (result != NULL)
	{
		printf("Found string: %s\n", result);
		printf("Address: %p\n", result);
	}
	else
	{
		printf("String not found.\n");
	}
	return (0);
}

