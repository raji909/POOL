/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 10:33:13 by adraji            #+#    #+#             */
/*   Updated: 2025/07/24 01:08:54 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_changer(char n)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	ft_putchar(hexa[(unsigned char)n / 16]);
	ft_putchar(hexa[(unsigned char)n % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
		{
			ft_putchar ('\\');
			ft_changer (str[i]);
		}
		else
		{
			ft_putchar (str[i]);
		}
		i ++;
	}
}
