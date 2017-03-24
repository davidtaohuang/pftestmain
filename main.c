/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuang <dhuang@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 20:08:38 by dhuang            #+#    #+#             */
/*   Updated: 2017/03/23 20:08:38 by dhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <wchar.h>
#include <locale.h>

int		ft_printf(const char *restrict format, ...);

int		main(void)
{
	int		chars;

	// setlocale(LC_CTYPE, "");

	chars = ft_printf("null %c and text", 0);
	printf("\n%d\n", chars);
	chars = printf("null %c and text", 0);
	printf("\n%d\n", chars);

	fflush(stdout);

	chars = ft_printf("%d %d %d %d gg!", 1, -2, 33, 42, 0);
	printf("\n%d\n", chars);
	chars = printf("%d %d %d %d gg!", 1, -2, 33, 42, 0);
	printf("\n%d\n", chars);

	fflush(stdout);

	chars = ft_printf("{%-15Z}", 123);
	printf("\n%d\n", chars);
	chars = printf("{%-15Z}", 123);
	printf("\n%d\n", chars);

	return (0);
}
