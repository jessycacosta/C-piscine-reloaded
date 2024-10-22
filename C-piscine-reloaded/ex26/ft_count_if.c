/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:45:30 by jecosta           #+#    #+#             */
/*   Updated: 2024/10/18 19:37:08 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) == 1)
		{
			j++;
		}
		i++;
	}
	return (j);
}

/*int	string_longer(char *str)
{
    return (strlen(str) > 1);
}

int	main(void)
{
	char	*tab[] = {
    	"Jessyca",
	"Andrielly",
	"42",
	"Piscine Reloaded",
	"2024", 
	};
   	int result;
	result = ft_count_if(tab, &string_longer);
	printf("%d\n", result);
	return (0);
}*/
