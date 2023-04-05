#include <unistd.h>
/**
 * print_char - prints char
 *
 * @c: character
 */
void print_char(char c)
{
	write(1, &c, 1);
}
/**
 * print_all_letter_starting_from - print letters starting from char c
 *
 * @c: character
 */
void print_all_letters_starting_from(char c)
{
	if (c > 'z')
	{
		return;
	}
	print_char(c);
	print_all_letters_starting_from(c + 1);
}
/**
 * print_alphabet - prints alphabet 
 */
void print_alphabet(void)
{
	print_all_letters_starting_from('a');
}
/**
 * main - check code
 *
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	print_char('\n');
	return (0);
}
