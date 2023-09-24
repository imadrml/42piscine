/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imramoul <imramoul@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 14:44:37 by imramoul          #+#    #+#             */
/*   Updated: 2023/09/23 15:42:56 by imramoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	ft_strcmp(char *s1, char *s2)
{

	while (*s1 == *s2 && (*s1 || *s2))
	{
		s1++, s2++;
	}
	return (*s1 - *s2);
}
*/
/*
int main(void)
{
    char *s1;
    char *s2;
    
    s1 = "imad";
    s2 = "imad";
	printf("%d", ft_strcmp(s1, s2));
	printf("\n%d", ft_strcmp("imad", "im"));
    printf("\n%d", ft_strcmp("im", "imad"));
    printf("\n%d", ft_strcmp("imad", "imad"));

}
*/
