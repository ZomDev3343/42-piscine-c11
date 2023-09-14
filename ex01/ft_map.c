/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <thomasdelan2@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:41:42 by truello           #+#    #+#             */
/*   Updated: 2023/09/14 18:14:41 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*r;

	i = 0;
	r = (int *) malloc(sizeof(int) * length);
	while (i < length)
	{
		r[i] = (*f)(tab[i]);
		i++;
	}
	return (r);
}

int	power_of_2(int a)
{
	return a * a;
}

#include <stdio.h>
int	main(void)
{
	int	test[5] = {2, 4, 5, 3, 5};
	int	*res;
	
	res = ft_map(test, 5, &power_of_2);
	for (int i = 0; i < 5; i++)
	{
		printf("Test -> %d, Res -> %d\n", test[i], res[i]);
	}
	return (0);
}
