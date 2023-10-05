/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imramoul <imramoul@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:18:33 by imramoul          #+#    #+#             */
/*   Updated: 2023/10/04 21:26:38 by imramoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*dest;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
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
