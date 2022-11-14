/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanelas <acanelas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 06:03:38 by acanelas          #+#    #+#             */
/*   Updated: 2022/11/13 23:02:17 by acanelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	b;
	size_t	c;
	size_t	d;

	if (size == 0)
		return (ft_strlen(src));
	d = ft_strlen(src);
	b = ft_strlen(dst);
	c = b;
	a = 0;
	if (size <= b)
		return (d + size);
	while (src[a] && a < size - b - 1)
	{
		dst[c] = src[a];
		a++;
		c++;
	}
	dst[c] = '\0';
	return (b + d);
}
/*
int main (void)
{
	char src[] = " merda";
    	char dest [] = "andre";
    printf("%li \n", ft_strlcat(dest, src, 20));
    //ft_strlcat(dest, src, 20);
    printf("%s \n", dest);
	//SE EU RETIRAR O ESPAÇO ANTES DO "MERDA", ELE DÁ ME CORE DUMPED!
	// BASTA COLOCAR O ESPAÇO QUE NÃO DÁ ERRO NENHUM! MUITO ESTRANHO! 
	//NÃO FAÇO IDEIA DO PORQUE!
}
*/