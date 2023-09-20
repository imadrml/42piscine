/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imramoul <imramoul@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:12:38 by imramoul          #+#    #+#             */
/*   Updated: 2023/09/19 13:14:35 by imramoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main(void)
{
    char source[] = "Hello, World!";
    char destination[20]; // Define a destination buffer

    
    ft_strcpy(destination, source);

    // Print the result to verify
    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}*/