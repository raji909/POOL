/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:28:17 by adraji            #+#    #+#             */
/*   Updated: 2025/07/26 01:59:47 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	skip_whitespace(char *str, int i)
{
	while (str[i] == ' ' || (str[i] > 8 && str[i] < 14))
		i++;
	return (i);
}

int	get_sign(char *str, int *i)
{
	int	sign;

	sign = 0;
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			sign++;
		(*i)++;
	}
	if ((sign % 2) != 0)
	{
		return (-1);
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	num = 0;
	i = skip_whitespace(str, i);
	sign = get_sign(str, &i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * sign);
}
