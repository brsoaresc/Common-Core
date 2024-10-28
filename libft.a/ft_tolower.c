/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 08:05:52 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/28 08:05:59 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		ch += 32;
	return (ch);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("test1 = %c\n", ft_tolower('A'));
	printf("test2 = %c\n", ft_tolower('Z'));
	printf("test3 = %c\n", ft_tolower('b'));
	printf("test4 = %c\n", ft_tolower('7'));
	return (0);
}*/
