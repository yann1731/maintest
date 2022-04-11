#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int val = 42;
	char *str = "hello lol lol lol\0 cache coucou\n";
	int	return_val;

	return_val = printf("real deal: %c \n", val);
	printf("return_val = %d\n", return_val);
	return_val = ft_printf("fake deal: %c \n", val);
	printf("return_val = %d\n", return_val);
	return_val = printf("real deal: %c \n", 0);
	printf("return_val = %d\n", return_val);
	return_val = ft_printf("fake deal: %c \n", 0);
	printf("return_val = %d\n", return_val);
	return_val = printf("real deal: %d \n", val);
	printf("return_val = %d\n", return_val);
	return_val = ft_printf("fake deal: %d \n", val);
	printf("return_val = %d\n", return_val);
	return_val = printf("real deal: %i \n", val);
	printf("return_val = %d\n", return_val);
	return_val = ft_printf("fake deal: %i \n", val);
	printf("return_val = %d\n", return_val);
	return_val = printf("real deal: %u \n", val);
	printf("return_val = %d\n", return_val);
	return_val = ft_printf("fake deal: %u \n", val);
	printf("return_val = %d\n", return_val);
	return_val = printf("real deal: %x \n", val);
	printf("return_val = %d\n", return_val);
	return_val = ft_printf("fake deal: %x \n", val);
	printf("return_val = %d\n", return_val);
	return_val = printf("real deal: %X \n", val);
	printf("return_val = %d\n", return_val);
	return_val = ft_printf("fake deal: %X \n", val);
	printf("return_val = %d\n", return_val);
	return_val = printf("real deal: %X \n", val);
	printf("return_val = %d\n", return_val);
	return_val = ft_printf("fake deal: %X \n", val);
	printf("return_val = %d\n", return_val);
	return_val = printf("real deal: %p \n", &val);
	printf("return_val = %d\n", return_val);
	return_val = ft_printf("fake deal: %p \n", &val);
	printf("return_val = %d\n", return_val);
	return_val = printf("real deal: %.3s \n", NULL);
	printf("return_val = %d\n", return_val);
	return_val = ft_printf("fake deal: %.3s \n", 0);
	printf("return_val = %d\n", return_val);
	return_val = printf("real deal: %%%%%%\n");
	printf("return_val = %d\n", return_val);
	return_val = ft_printf("fake deal: %%%%%%\n");
	printf("return_val = %d\n", return_val);
	return_val = printf("real deal: %c%s%d%p%i%u%x%X%%\n", val, str, val, &val, val, val, val, val);
	printf("return_val = %d\n", return_val);
	return_val = ft_printf("fake deal: %c%s%d%p%i%u%x%X%%\n", val, str, val, &val, val, val, val, val);
	printf("return_val = %d\n", return_val);



	printf("********* Start of the bonus ***********");

	return_val = printf("real deal: %-15d %.2s %c %i %u %#x %#X %p\n", val, str, 100, -1000, -100000, 0x32, 0, NULL);
	printf("return_val = %d\n", return_val);
	return_val = ft_printf("fake deal: %-15d %.2s %c %i %u %#x %#X %p\n", val, str, 100, -1000, -100000, 0x32, 0, NULL);
	printf("return_val = %d\n", return_val);
	return_val = printf("real deal: %-15d%.2s%c%i%u%#x%#X%p\n", val, str, 100, -1000, -100000, 0x32, 0, NULL);
	printf("return_val = %d\n", return_val);
	return_val = ft_printf("fake deal: %-15d%.2s%c%i%u%#x%#X%p\n", val, str, 100, -1000, -100000, 0x32, 0, NULL);
	printf("return_val = %d\n", return_val);
	return (0);
}