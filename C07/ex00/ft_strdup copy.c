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

#include <stdlib.h> // for malloc and free
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
	char	*allocated;

	str = "Hello World with malloc()";
	printf("original  : base  : $%s$ @ %p\n", str, str);
	allocated = strdup(str);
	printf("copied    : alloc : $%s$ @ %p\n", allocated, allocated);
	allocated = ft_strdup(str);
	printf("ft_copied : alloc : $%s$ @ %p\n", allocated, allocated);
}
*/
/*
#include <stdlib.h> // for malloc and free

char *ft_strdup(const char *src)
{
    // Check if the source string is NULL
    if (src == NULL)
        return NULL;

    // Calculate the length of the source string
    size_t len = 0;
    while (src[len] != '\0')
        len++;

    // Allocate memory for the new string (including space for the null terminator)
    char *new_str = (char *)malloc((len + 1) * sizeof(char));

    // Check if memory allocation was successful
    if (new_str == NULL)
        return NULL;

    // Copy the source string into the new memory
    for (size_t i = 0; i <= len; i++)
        new_str[i] = src[i];

    return new_str;
}

int main(void)
{
    const char *source = "Hello, World!";
    char *duplicate = ft_strdup(source);

    if (duplicate != NULL)
    {
        // Print the duplicated string
        printf("Duplicated String: %s\n", duplicate);

        // Don't forget to free the allocated memory when done
        free(duplicate);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}

*/