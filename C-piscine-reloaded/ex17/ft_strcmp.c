/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:18:05 by jecosta           #+#    #+#             */
/*   Updated: 2024/10/17 12:31:01 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] == s2[j] && s1[i] != '\0')
	{
		i++;
		j++;
	}
	return (s1[i] - s2[j]);
}

/*int	main(int argc, char **argv)
{
	char	*s1;
	char	*s2;

	s1 = argv[1];
	s2 = argv[2];
	if (argc < 3)
		return (1);
	ft_strcmp(s1, s2);
	printf("%d \n", ft_strcmp(s1, s2));
	return (0);
}*/
