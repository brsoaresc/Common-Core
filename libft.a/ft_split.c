/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:44:08 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/28 09:44:10 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] != c && str[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

static int	ft_length_words(char const *str, char c, int i)
{
	int	len;

	len = 0;
	while (str[i] != c && str[i])
	{
		i++;
		len++;
	}
	return (len);
}

static void	ft_free_memory(char **arr, int i)
{
	while (--i >= 0)
		free(arr[i]);
	free(arr);
}

static char	*ft_extract_substring(char const *str, int i, char c)
{
	char	*substring;
	int		substring_len;

	substring_len = ft_length_words(str, c, i);
	substring = ft_substr(str, i, substring_len);
	return (substring);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	int		i;
	int		j;
	char	**arr;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	arr = (char **)malloc((words + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	j = 0;
	while (j < words)
	{
		while (s[i] == c)
			i++;
		arr[j] = ft_extract_substring(s, i, c);
		if (!arr[j])
			return (ft_free_memory(arr, j), NULL);
		i += ft_length_words(s, c, i);
		j++;
	}
	arr[j] = NULL;
	return (arr);
}
/*
#include <stdio.h>

int	main(void)
{
	char **result;
	result = ft_split("Happy day 42", ' ');
	printf("Word 1: %s\n", result[0]);
	printf("Word 2: %s\n", result[1]);
	printf("Word 3: %s\n", result[2]);
	return (0);
}*/