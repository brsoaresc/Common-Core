/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 08:00:05 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/28 08:00:22 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int ch)
{
	if ((ch >= 'a' && ch <= 'z')
		|| (ch >= 'A' && ch <= 'Z')
		|| (ch >= '0' && ch <= '9'))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("test1 = %d\n", ft_isalnum('b'));
	printf("test2 = %d\n", ft_isalnum('7'));
	printf("test3 = %d\n", ft_isalnum('#'));
	return (0);
}*/
