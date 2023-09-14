/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <thomasdelan2@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:25:50 by truello           #+#    #+#             */
/*   Updated: 2023/09/14 18:37:55 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lower(char *str)
{
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
			return (0);
		str++;
	}
	return (1);
}

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int count = 0;
	for (int i = 0; i < length; i++)
	{
		if ((*f)(tab[i]))
			count++;
	}
	return (count);
}

#include <stdio.h>
int	main(void)
{
	char *test[] = {"jgreohger", "fewfwe", "3", "ERGREEHERH"};

	printf("Count If (test) : %d\n", ft_count_if(test, 4, &is_lower));
	return (0);
}
