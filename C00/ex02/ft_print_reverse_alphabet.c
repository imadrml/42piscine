/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imramoul <imramoul@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 23:57:01 by imramoul          #+#    #+#             */
/*   Updated: 2023/09/17 18:56:26 by imramoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	x;

	x = 122;
	while (x >= 97)
	{
		write (1, &x, 1);
		x--;
	}
}

/*
int	main()
{
	ft_print_reverse_alphabet();
    return(0);
}
*/
