/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:15:35 by jecosta           #+#    #+#             */
/*   Updated: 2024/10/14 16:25:54 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int	i;

	i = 48;
	while (i <= 57)
	{
		ft_putchar(i);
		i++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
