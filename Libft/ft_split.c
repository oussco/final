/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oba <oba@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:18:53 by oba               #+#    #+#             */
/*   Updated: 2024/03/13 22:14:11 by oba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	wcount(char *s, char c)
{
	int	w;
	int	x;

	x = 0;
	w = 0;
	while (s[x] == c && s[x])
	{
		x++;
		if (s[x] != c)
		{
			w++
			}
				while (s[x] != c && s[x])
			{
				x++;
			}
	
	}
	
	}
	
	char **ft_split(char const *s, char c)
	{
		char	**tableau;
		int		wcount;
		int		x;
		int		y;

	x = 0;
	y = 0;
	wcount = wordcount(s,c);
}

int	main(void)
{
	char	tab[] = "allo!:) maman c'est ous";
	char	trim = ' ';
	char	**chad = ft_split(tab,trim);
	if (!chad)
		return ((int)NULL);
	int	i = 0;
	while (chad[i] != NULL)
	{
		printf("%s\n", chad[i]);
		free(chad[i]);
		i++;
	}
	free(chad);
	printf("%i",ft_wordcount(tab, trim));
}