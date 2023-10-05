/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imramoul <imramoul@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:36:09 by imramoul          #+#    #+#             */
/*   Updated: 2023/10/02 17:21:23 by imramoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i += 1;
	}
	return (1);
}

/*
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
} */
/*
to make it faster change while (i * i <= nb)
 to while (i <= (nb/i))
function take integer nb as argument
it initializes an integer variable i to 2
will be used to check divisibility starting from 2
'while' loop is used to start from i=2 up to
the square root of nb, because, when checking for prime 
numbers, you only need to consider factors up to the 
the square root of the number.
*/
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