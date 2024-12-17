/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tommynchen <tochen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 22:02:10 by tommynche         #+#    #+#             */
/*   Updated: 2024/12/17 22:02:20 by tommynche        ###   ########.usa      */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int			*ft_rrange(int start, int end)
{
	int i;
	int num_of_int_slots;
	int *ret;
	
	i = 0;
	num_of_int_slots = 0;
	if(end > start){num_of_int_slots += end - start + 1;}
	if(start > end){num_of_int_slots += start - end + 1;}
	
	ret = (int *)malloc( ( sizeof(int) * num_of_int_slots ) + 1);
	if(end == start)
	{
		ret[0] = start;
		return (ret);
	}
	if(end > start)
	{
		while(i < num_of_int_slots)
		{	
			ret[i] = end - i;
			i++;
		}
		return (ret);
	}
	if(start > end)
	{
		while(i < num_of_int_slots)
		{
			ret[i] = start - i; 
			i++;
		}
		return (ret);
	}
	return (ret);
}

int			main()
{
	int *int_ptr1, *int_ptr2, *int_ptr3;
	//int_ptr1 = (int *)malloc(50);

	//int_ptr1 = ft_rrange(0,0);
	
	printf("ft_rrange(0,0) array first slot %i\n", ft_rrange(0,0)[0]);
	printf("ft_rrange(1,3) array first slot %i\n", ft_rrange(1,3)[0]);
	return (0);	
}
