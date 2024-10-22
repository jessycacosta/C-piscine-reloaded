/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:07:27 by jecosta           #+#    #+#             */
/*   Updated: 2024/10/16 14:45:19 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*array_int;
	int	size;
	int	i;

	if (min >= max)
		return (0);
	size = max - min;
	array_int = (int *)malloc(size * sizeof(int));
	i = 0;
	while (min < max)
	{
		array_int[i] = min;
		i++;
		min++;
	}
	return (array_int);
}

/*int	main(void)
{
	int	min;
	int	max;
	int	*array;
	int	i;
	int	size;

	min = 10;
	max = 20;	
	array = ft_range(min, max);
	i = 0;
	size = max - min;
	while (i < size)
	{
		printf("%d \n", array[i]);
		i++;
	}
	free(array);
	return (0);
}*/
