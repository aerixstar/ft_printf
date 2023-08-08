# include <unistd.h>
# include <stdio.h>

int main(void)
{
	char *str = "value of i\n";
	char *v = &str[0];
	printf("this is str : %c\nThis is adress of v%p\n", *str, v);
	str++;
	v++;
	printf("this is str : %p\nThis is adress of v%p\n", str, v);
}