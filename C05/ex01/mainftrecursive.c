
#include <stdio.h>

int		ft_recursive_factorial(int nb);

int main()
{
	puts("\n\n");
	for(int i = 0; i < 10; ++i)
	{
		if (0 == i){printf("Factorial %d !%d-> %d\t\t\n\n",i , i, ft_recursive_factorial(i)); continue;}
		printf("Factorial %d !%d-> %d\t\t",i , i, ft_recursive_factorial(i));
		printf("%d / %d -> %d\n\n",ft_recursive_factorial(i), i, ft_recursive_factorial(i) / i);
	}


}

/*
int	main(void)
{
	printf("%i", ft_recursive_factorial(9));
}*/