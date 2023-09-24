/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imramoul <imramoul@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 14:53:26 by imramoul          #+#    #+#             */
/*   Updated: 2023/09/23 19:37:22 by imramoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 == *s2 && --n && (*s1 || *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
#include <stdio.h>
#include <string.h> libery to test strncmp
--n caus i=0 
int main(void)
{
	printf("%d", ft_strncmp("imad RAML", "imad RA~L", 8));
	printf("\n%d", ft_strncmp("imad", "imad raml", 9));
    printf("\n%d", ft_strncmp("imad raml", "imad raml", 9));
    printf("\n%d", ft_strncmp("imad rml", "IMAD RML", 8));

}
*/
