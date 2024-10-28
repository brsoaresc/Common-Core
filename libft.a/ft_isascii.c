/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 08:01:00 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/28 08:01:21 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int ch)
{
	if (ch >= 0 && ch <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("test1 = %d\n", ft_isascii(77));
	printf("test2 = %d\n", ft_isascii(177));
	printf("test3 = %d\n", ft_isascii(0));
	printf("test4 = %d\n", ft_isascii(-7));
	return (0);
}*/
