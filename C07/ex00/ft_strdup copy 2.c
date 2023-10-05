/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imramoul <imramoul@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:18:33 by imramoul          #+#    #+#             */
/*   Updated: 2023/10/03 16:18:35 by imramoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	ft_str_length(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strdup(char *src)
{
	int		index;
	char	*dest;
	char	*d;

	index = 0;
	d = ((dest = (char *)malloc(ft_str_length(src) * sizeof(char) + 1)));
	if (!d)
	{
		return (0);
	}
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
/*
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int		main(void)
{
	char	*str;
	char	*prt;

	str = "imad 42 quebec!";
	printf("original  : base  : $%s$ @ %p\n", str, str);
	prt = strdup(str);
	printf("copied    : alloc : $%s$ @ %p\n", prt, prt);
	prt = ft_strdup(str);
	printf("ft_copied : alloc : $%s$ @ %p\n", prt, prt);
}
*/