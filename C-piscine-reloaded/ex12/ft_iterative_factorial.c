/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:31:51 by jecosta           #+#    #+#             */
/*   Updated: 2024/10/16 12:36:39 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = nb;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	while (nb > 1)
	{
		nb--;
		factorial = nb * factorial;
	}
	return (factorial);
}

/*int	main(void)
{
	int	nb;
	int	fact;

	nb = 12;
	fact = ft_iterative_factorial(nb);
	printf("%d \n", fact);
	return (0);
}*/
