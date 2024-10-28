/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 08:02:03 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/28 08:02:12 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int ch)
{
	if (ch >= 32 && ch <= 126)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("test1 = %d\n", ft_isprint(32));
	printf("test2 = %d\n", ft_isprint(126));
	printf("test3 = %d\n", ft_isprint(7));
	printf("test4 = %d\n", ft_isprint(177));
	return (0);
}*/
