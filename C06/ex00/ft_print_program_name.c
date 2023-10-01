/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imramoul <imramoul@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:28:26 by imramoul          #+#    #+#             */
/*   Updated: 2023/10/01 11:25:34 by imramoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	(void)argc;
	i = 0;
	while (argv[0][i] != '\0')
	{
		ft_putchar(argv[0][i]);
		i++;
	}
	ft_putchar('\n');
	return (0); 
}
/*
int main(int argc, char **argv)
{
	//Trick -Wall -Wextra -Werror
	(void)argc;
	
	//Pro, 2 lines.
	while (**argv)
				 //👀 (necessary)	
		write(1, (*argv)++, 1);
}
*/