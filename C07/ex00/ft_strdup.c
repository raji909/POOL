/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adraji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 21:26:02 by adraji            #+#    #+#             */
/*   Updated: 2025/07/28 21:58:13 by adraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strsize(char *str)
{
	int	size;

	size = 0;
	while (str[size])
	{
		size++;
	}
	return (size + 1);
}

char	*ft_strdup(char *src)
{
	int			src_size;
	char		*dup;

	src_size = ft_strsize(src);
	dup = malloc(src_size * sizeof(char));
	if (dup == NULL)
	{
		return (NULL);
	}
	ft_strcpy(dup, src);
	return (dup);
}
