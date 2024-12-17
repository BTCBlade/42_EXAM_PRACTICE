#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
		
		//printf("data in argc %i\n", argc);
		int i;
		int ret;
		char op_char;
		op_char = *argv[2];
		//i = 1;
		ret = 0;
		//while(i < 4)
		//{
		if(argc == 4)
		{
			if(op_char == '+'){ ret = atoi(argv[1]) + atoi(argv[3]);}
			if(op_char == '-'){ ret = atoi(argv[1]) - atoi(argv[3]);}
			if(op_char == '*'){ ret = atoi(argv[1]) * atoi(argv[3]);}
			if(op_char == '/'){ ret = atoi(argv[1]) / atoi(argv[3]);}
			if(op_char == '%'){ ret = atoi(argv[1]) % atoi(argv[3]);}
			printf("%i\n", ret);
		}else
		{
			printf("\n");
		}
			//printf("data in argv[%i] is %s\n", i, argv[i]);
			//printf("i is currently %i\n", i);
			//i++;
		//}

		return (1);
}

