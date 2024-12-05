#include "ft_printf.h"

int	ft_moyenne(int nb,...)
{
	va_list num;
	int i;
	int total;
	int result;
	
	total = 0;
	i = 0;

	va_start(num, nb);
	while (i<nb)
	{
		total += va_arg(num, int);
		i++;
	}
	result = total / i;
	return (result);
}
int main()
{
    int a = ft_moyenne(2,50, 50);
    ft_printf("%d\n",a);
}
