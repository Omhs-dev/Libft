/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:27:29 by ohamadou          #+#    #+#             */
/*   Updated: 2022/11/25 16:27:29 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	arr = malloc(nmemb * size);
	if (nmemb == 0 || size == 0)
	{
		free(arr);
		return (malloc(0));
	}
	if (!arr)
		return (NULL);
	ft_bzero(arr, nmemb * size);
	return (arr);
}

// int main () {
// 	int i, n;
// 	int *a;

// 	printf("Number of elements to be entered:");
// 	scanf("%d",&n);
// 	a = (int*)ft_calloc(n, sizeof(int));
// 	printf("Enter %d numbers:\n",n);
// 	for( i=0 ; i < n ; i++ ) {
// 		scanf("%d",&a[i]);
// 	}
// 	printf("The numbers entered are: ");
// 	for( i=0 ; i < n ; i++ ) {
// 		printf("%d ",a[i]);
// 	}
// 	free( a );
// 	return(0);
// }