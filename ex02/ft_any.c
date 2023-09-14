/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <thomasdelan2@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:14:53 by truello           #+#    #+#             */
/*   Updated: 2023/09/14 18:25:35 by truello          ###   ########.fr       */
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

int	ft_any(char **tab, int (*f)(char*))
{
	int i = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]))
			return (1);
		i++;
	}
	return (0);
}


#include <stdio.h>
int	main(void)
{
	char *test[] = {"salut", "coucou", "choihgh", 0};
	char *test2[] = {"SALUT", "JRGLJEGJ", "choihgh", 0};
	char *test3[] = {"SALUT", "JRGLJEGJ", "GERGRE", 0};

	printf("Is any lower (test) : %d\n", ft_any(test, &is_lower));
	printf("Is any lower (test2) : %d\n", ft_any(test2, &is_lower));
	printf("Is any lower (test3) : %d\n", ft_any(test3, &is_lower));
	return (0);
}
