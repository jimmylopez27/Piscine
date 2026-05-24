/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 13:52:32 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/14 18:40:34 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10;
		result = result + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
/**
int	main(void)
{
	char	str1[] = "   -42";
	char	str2[] = "123andimdead";
	char	str3[] = "nooutput?";
	int		val1;
	int		val2;
	int		val3;

	val1 = ft_atoi(str1);
	val2 = ft_atoi(str2);
	val3 = ft_atoi(str3);
	printf("str1[]: %d\nstr2[]: %d\nstr3[]: %d\n", val1, val2, val3);
	return (0);
}
**/
