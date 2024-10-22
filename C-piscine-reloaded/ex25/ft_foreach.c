/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:33:44 by jecosta           #+#    #+#             */
/*   Updated: 2024/10/18 16:42:34 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i++]);
	}
}

/*void	ft_putnbr(int n)
{
	printf("%d\n", n);
}

int	main(void)
{
	int	tab[] = {13, 21, 24, 1, 65, 89, 97};
	ft_foreach(tab, 7, &ft_putnbr);
	return 0;
}*/
