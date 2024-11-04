/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:50:20 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/29 09:52:34 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(char ch);
int	ft_putstr(char *str);
int	ft_putptr(unsigned long ptr);
int	ft_address(unsigned long addr);
int	ft_putnbr(int number);
int	ft_putnbr_unsigned(unsigned int number);
int	ft_putnbr_hex(unsigned int number, int lowercase);

#endif
