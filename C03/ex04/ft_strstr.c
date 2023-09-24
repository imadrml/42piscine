/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imramoul <imramoul@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 10:47:56 by imramoul          #+#    #+#             */
/*   Updated: 2023/09/24 11:07:18 by imramoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char *ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while ((*str) && (*to_find) )
	{
		if (str[i+j] == to_find[j]);
			i++;
			j++;
	}
	to_find[j] = '\0';
	return (to_find[j]);
}
/*
#include <stdio.h>
int main(void)
{
	char str1[] = "hello my name is imad eddine";
	char tofind[] = "iamd";
	printf("%s\n", ft_strstr(str1, tofind)); 
}
*/