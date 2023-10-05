/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imramoul <imramoul@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:36:09 by imramoul          #+#    #+#             */
/*   Updated: 2023/10/02 15:36:12 by imramoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / i))
	{
		if (!(nb % i))
			return (0);
		else
			i += 1;
	}
	return (1);
}
/*int ft_is_prime(int nb)
{
    if (nb <= 1)
        return (0);

    for (int i = 2; i * i <= nb; i++)
    {
        if (nb % i == 0)
            return (0);
    }

    return (1);
}*/

#include <stdio.h>
int main (void)
{
	printf("%d -> %d\n", -3965, ft_is_prime(-3965));
	printf("%d -> %d\n", -12, ft_is_prime(-12));
	printf("%d -> %d\n", 0, ft_is_prime(0));
	printf("%d -> %d\n", 1, ft_is_prime(1));
	printf("%d -> %d\n", 2, ft_is_prime(2));
	printf("%d -> %d\n", 3, ft_is_prime(3));
	printf("%d -> %d\n", 4, ft_is_prime(4));
	printf("%d -> %d\n", 5, ft_is_prime(5));
	printf("%d -> %d\n", 7, ft_is_prime(7));
	printf("%d -> %d\n", 11, ft_is_prime(11));
	printf("%d -> %d\n", 13, ft_is_prime(13));
	return (0);
} 
/*(int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
)*/