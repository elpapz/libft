/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanelas <acanelas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 05:22:14 by acanelas          #+#    #+#             */
/*   Updated: 2022/11/13 21:18:05 by acanelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = ((unsigned char *)s1);
	str2 = ((unsigned char *)s2);
	if (n == 0)
		return (0);
	while ((n - 1) > 0 && *str1 && *str2)
	{
		if (*str1 > *str2)
		{
			return (*str1 - *str2);
		}
		else if (*str1 < *str2)
		{
			return (*str1 - *str2);
		}
		str1++;
		str2++;
		n--;
	}
	return (*str1 - *str2);
}
/*
int		main(void)
{
	char a [] = "andre";
	char b [] = "andRe";
	printf("%d\n", ft_strncmp(a, b, 4));
	printf("%d", strncmp(a, b, 4));
}
*/
