#include "printf.h"


int main()
{
	int a = -1;
	ft_printf("%c %u %p %d \n", 'a', a, &a, a);
	printf("%c %u %p %d", 'a', a, &a, a);
}
