#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


int		*ft_rrange(int start, int end)
{
	int *ret;
	int ret_length = end - start + 1;
	int i;

	i = 0;
	while(i < ret_length)
	{
	}
	return (ret);	
}

void	print_arr(int *arr)
{
	int i;
	int arr_length;
	printf("arr[0] is %i\n", arr[0]);
	printf("arr[1] is %i\n", arr[1]);
	printf("arr[2] is %i\n", arr[2]);
	printf("arr[3] is %i\n", arr[3]);
	//arr_length = sizeof(arr) / sizeof(arr[0]);
	//printf("length of arr is %i\n", arr_length);
	//printf("total bytes of arr is %lu\n", sizeof(&arr));	
	//i = 0;
	//while(i < arr_length)
	//{
	//	printf("i is %i, arr[i] returns %i\n", i, arr[i]);
	/*	i++;
	}
	*/
}


int			main()
{
	/*
	int *test_arr_ptr;
	int x;
	x = 45;
	***declare int pointer and use right side = dereference char & and pre declared and assigned variable***
NOT as this syntax
	*test_arr_ptr = &x;
	*/

	int y;
	printf("int y; dereferenced address in decimal pre assignment %lu\n", &y);
	printf("int y; derferenced address in hexidecimal pre assignment %p\n", &y);

	y = 50;
	printf("int y after y = 50; assignment  dereferenced address in decimal %lu\n", &y);
	printf("int y after y = 50; assignment dereferenced address in hexidecimal %p\n", &y);

	int *test_int_arr_ptr2 = &y;
	printf("test_int_arr_ptr2 address in decimal %lu\n", &test_int_arr_ptr2);
	printf("test_int_arr_ptr2 address in hexidecimal %p\n", &test_int_arr_ptr2);
		
	return (0);
}
