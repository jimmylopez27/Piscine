/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 12:40:46 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/09 18:49:39 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    ft_print_comb2(void)
{
        int     a;
        int     b;

        a = 0;
        while (a <= 98)
        {
                b = a + 1;
                while (b <= 99)
                {
                        ft_putchar(a / 10 + '0');
                        ft_putchar(a % 10 + '0');
                        write(1, " ", 1);
                        ft_putchar(b / 10 + '0');
                        ft_putchar(b % 10 + '0');
                        if (!(a == 98 && b == 99))
                                write(1, ", ", 2);
                        b++;
                }
                a++;
        }
}

int main()
{

}
