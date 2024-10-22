/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:10:26 by jecosta           #+#    #+#             */
/*   Updated: 2024/10/17 12:16:39 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int	main(int argc, char **argv)
{
	char	*str;

	str = argv[1];
	if (argc < 2)
		return (1);
	ft_strlen(str);
	printf("%d \n", ft_strlen(str));
	return (0);
}*/
