/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 08:01:34 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/28 08:01:45 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int ch)
{
	if (ch >= '0' && ch <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("test1 = %d\n", ft_isdigit('b'));
	printf("test2 = %d\n", ft_isdigit('7'));
	return (0);
}*/
