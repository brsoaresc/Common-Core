/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 08:00:37 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/28 08:00:52 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("test1 = %d\n", ft_isalpha('b'));
	printf("test2 = %d\n", ft_isalpha('7'));
	return (0);
}*/
