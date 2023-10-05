/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imramoul <imramoul@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:36:34 by imramoul          #+#    #+#             */
/*   Updated: 2023/10/02 18:28:15 by imramoul         ###   ########.fr       */
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
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}

/*
#include <stdio.h>

int main (void)
{
	printf("%d -> %d\n", -2320, ft_find_next_prime(-2320));
	printf("%d -> %d\n", 0, ft_find_next_prime(0));
	printf("%d -> %d\n", 1, ft_find_next_prime(1));
	printf("%d -> %d\n", 2, ft_find_next_prime(2));
	printf("%d -> %d\n", 3, ft_find_next_prime(3));
	printf("%d -> %d\n", 4, ft_find_next_prime(4));
	printf("%d -> %d\n", 9, ft_find_next_prime(9));
	printf("%d -> %d\n", 57232, ft_find_next_prime(57232));
	printf("%d -> %d\n", 87443, ft_find_next_prime(87443));
	printf("%d -> %d\n", 124312, ft_find_next_prime(124312));
	printf("%d -> %d\n", 69531, ft_find_next_prime(69531));
	printf("%d -> %d\n", 72609, ft_find_next_prime(72609));
	printf("%d -> %d\n", 199595, ft_find_next_prime(199595));
	printf("%d -> %d\n", 163244, ft_find_next_prime(163244));
	printf("%d -> %d\n", 365490, ft_find_next_prime(365490));
	printf("%d -> %d\n", 221121, ft_find_next_prime(221121));
	printf("%d -> %d\n", 231874, ft_find_next_prime(231874));
	printf("%d -> %d\n", 199416, ft_find_next_prime(199416));
	printf("%d -> %d\n", 54226, ft_find_next_prime(54226));
	printf("%d -> %d\n", 52189, ft_find_next_prime(52189));
	printf("%d -> %d\n", 137182, ft_find_next_prime(137182));
	return (0);
}
*/
