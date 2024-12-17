#include <stdlib.h>
#include <stdio.h>

void		ft_swap(int *a, int *b)
{
	int temp1;
	int temp2;
	temp1 = *a;
	temp2 = *b;
	*a = temp2;
	*b = temp1;
}

void		ft_swap1(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int		main()
{
	int first;
	int second;
	first = 5;
	second = 6;
	//int *ptr1 = &first;
	//int *ptr2 = &second;
	int *ptr1;
	int *ptr2;
	//ptr1 = &first;
	//ptr2 = &second;
	
	printf("variable first %i\n", first);
	printf("variable first dereferenced %p\n", &first);
	printf("variable second %i\n", second);
	printf("variable second dereferenced %p\n\n", &second);
	printf("pre swap ptr1 address is %p\n", ptr1);
	printf(" pre swap ptr2 address is %p\n", ptr2);
	//ft_swap1(ptr1, ptr2);
	//printf("post ft_swap ptr1 address is now %p, ptr2 address is now %p", ptr1, ptr2);

	return (0);
} 
