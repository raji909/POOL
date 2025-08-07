/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 17:59:32 by adraji            #+#    #+#             */
/*   Updated: 2025/07/22 21:27:37 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
	{
		i ++;
	}
	j = 0;
	while (src[j] && j < nb)
	{
		dest[i] = src [j];
		i ++;
		j ++;
	}
	dest[i] = '\0';
	return (dest);
}
