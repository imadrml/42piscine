/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imramoul <imramoul@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 12:52:22 by imramoul          #+#    #+#             */
/*   Updated: 2023/10/02 14:23:07 by imramoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb > 0)
		return (nb * ft_recursive_factorial(nb - 1));
	else 
		return (1);
}

/*
#include <stdio.h>
int	main(void)
{
	int nb = 5;
	printf("%d", ft_recursive_factorial(nb));
	printf("%i", ft_recursive_factorial(3));
}
*/
/*
#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb > 0)
	{
		result *= nb * ft_recursive_factorial(nb - 1);
		nb -= 1;
	}
	if (nb < 0)
		return (0);
	return (result);
}
int	main(void)
{
	int nb = 5;
	printf("%d", ft_recursive_factorial(nb));
	printf("%i", ft_recursive_factorial(3));
}
*/
