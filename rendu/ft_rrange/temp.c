/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temp.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tommynchen <tochen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 22:02:10 by tommynche         #+#    #+#             */
/*   Updated: 2024/12/19 02:22:47 by tommynche        ###   ########.usa      */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int i;
	
	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int			*ft_rrange(int start, int end)
{
	int i;
	int num_of_int_slots;
	int *ret;
	
	i = 0;
	if(start == 0 && end == 0)
	{
		ret = {0};
		return (ret);
	}
	else if(start < 0 || end < 0 || start == 0 || end == 0)
	{
		num_of_int_slots = abs(start) + abs(end) + 1;
		ret = (int *)malloc( ( sizeof(int) * num_of_int_slots ) + 1);
	}else{
		ret = (int *)malloc( ( sizeof(int) * num_of_int_slots ) );
	}
	
	if(end > start)
	{
		if(end < 0 && start < 0){
		while(i < num_of_int_slots)
		{	
			ret[i] = end - i;
			i++;
		}
	}else if(start > end)
	{
		while(i < num_of_int_slots)
		{
			ret[i] = start - i; 
			i++;
		}	
	}
	return (ret);
}

void		print_int_arr(int *arr)
{
	int i;
	int arr_length;
	arr_length = sizeof(arr);
	i = 0;
	
	while(i < arr_length)
	{
		printf("%i ", arr[i]);
		i++;
	}
	putchar('\n');
}

int		main()
{
	int *test_arr1 = ft_rrange(1, 3);
	//int *test_arr2 = ft_rrange(0, 7);
	//int *test_arr3 = ft_rrange(9, 2);
	//int *test_arr4 = ft_rrange(7, 0);

	print_int_arr(test_arr1);
	//print_int_arr(test_arr2);
	//print_int_arr(test_arr3);
	//print_int_arr(test_arr4);
	return (0);	
}
