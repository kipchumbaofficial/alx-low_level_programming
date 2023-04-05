#include <unistd.h>
/**
 * print_char - print c
 * @c: character
 *
 * Return: void
 */
void print_char(char c)
{
	write(1, &c, 1);
}
/**
 * print_alphabet - iterates through alphabets
 */
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		print_char(c);
		c = c + 1;
	}
}
/**
 * main - checks code
 *
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	print_char('\n');
	return (0);
}
