/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imramoul <imramoul@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:05:01 by imramoul          #+#    #+#             */
/*   Updated: 2023/09/27 13:02:36 by imramoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_atoi(char *str)
{
	short	minesesnbr;
	int		number;

	minesesnbr = 0;
	number = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		++str;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minesesnbr++;
		++str;
	}
	while (*str >= '0' && *str <= '9')
	{
		number *= 10;
		number += *str - '0';
		++str;
	}
	if ((minesesnbr % 2) == 0)
		return (number);
	return (-number);
}
/*
#include <stdio.h>
int main(void)
{
	char	*s = "    ---+--+1234ab567";

	printf("%d\n",ft_atoi(s));
	char *s2 = "   ---+--+01234506789ab567";
	printf("%d", ft_atoi(s2));    
}
*/
/* while (*str == '\t' || *str == '\n' || *str == '\v' ||
    *str == '\f' || *str == '\r' || *str == ' ')
    {
            ++str;
}*/
/*
number *= 10; 0*10=0 ,0*1=10, this is to shift base10 the number
number += *str - 48; this is to convert char to int
(!(minesesnbr % 2)) if the value even? return number , else
return -number 
% module 2
exmpl 4 % 2 = 0 (1=true 0=false) so we invert it with ! to true value
*/
