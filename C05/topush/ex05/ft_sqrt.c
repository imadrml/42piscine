/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imramoul <imramoul@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 12:07:04 by imramoul          #+#    #+#             */
/*   Updated: 2023/10/02 14:55:59 by imramoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	index;
	long	a;

	a = nb;
	if (a <= 0)
	{
		return (0);
	}
	if (a == 1)
	{
		return (1);
	}
	index = 2;
	if (a >= 2)
	{
		while (index * index <= a)
		{
			if (index * index == a)
			{
				return (index);
			}
			index++;
		}
	}
	return (0);
}
/*
int    main(void)
{
	printf("sqrt of %d is %d\n", -2282, ft_sqrt(-2282));
	printf("sqrt of %d is %d\n", 0, ft_sqrt(0));
	printf("sqrt of %d is %d\n", 1, ft_sqrt(1));
	printf("sqrt of %d is %d\n", 2, ft_sqrt(2));
	printf("sqrt of %d is %d\n", 1454436, ft_sqrt(1454436));
	printf("sqrt of %d is %d\n", 1411303165, ft_sqrt(1411303165));
	printf("sqrt of %d is %d\n", 259564321, ft_sqrt(259564321));
	printf("sqrt of %d is %d\n", 416153106, ft_sqrt(416153106));
        return (0);
}*/
