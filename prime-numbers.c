/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prime-numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 10:22:34 by dkaplan           #+#    #+#             */
/*   Updated: 2018/01/31 16:20:21 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_RESET   "\x1b[32m"



int		ft_prime(int n)
{
	int i;

	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return(0);
		i++;
	}
	return (1);
}	
int		main(void)
{
	int n, i;

	n = 2;
	i = 1;
	while (n < 2000000000)
	{
		if (ft_prime(n) == 1)
		{
			printf(ANSI_COLOR_RESET"<%d> ", i);
			printf(ANSI_COLOR_RED "%d \n", n);
			i++;
		}
		//else 
		//	printf(ANSI_COLOR_RESET "%d ", n);
		n++;
	}
}
