/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 08:04:30 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/28 08:04:32 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//dest_len++; contem o comprimento da string dest
//src_len++; contem o comprimento da string src
//return (size + src_len); indica que nao foi possível concatenar

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	dest_len = 0;
	src_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (size <= dest_len)
		return (size + src_len);
	i = dest_len;
	j = 0;
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}
/*
#include <stdio.h>

int	main(void)
{
	char dest[15] = "Happy day";
	printf("Final: %zu\n", ft_strlcat(dest, ", 42!", 11));
	printf("Result: %s\n", dest);
	return (0);
}*/
