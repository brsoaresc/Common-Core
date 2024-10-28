/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 07:56:52 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/28 08:09:53 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t nb)
{
	unsigned char	*ptr1;

	ptr1 = ptr;
	while (nb--)
	{
		*ptr1++ = '\0';
	}
}
/*
#include <stdio.h>
#include <strings.h>

int	main(void)
{
	char buffer[10] = "Happy";
	bzero(buffer, 4);
	for (int i = 0; i < 10; i++)
	{
		if (buffer[i] == '\0')
		printf("\\0 ");
	else
		printf("%c ", buffer[i]);
	}
		printf("\n");
	return (0);
}*/
