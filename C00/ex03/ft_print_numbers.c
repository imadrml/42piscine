/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imramoul <imramoul@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 00:11:00 by imramoul          #+#    #+#             */
/*   Updated: 2023/09/17 19:03:15 by imramoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	y;

	y = '0';
	while (y <= '9')
	{
		write (1, &y, 1);
		y++;
	}
}
/*
int	main()
{
	ft_print_numbers();
    return(0);
}
*/
