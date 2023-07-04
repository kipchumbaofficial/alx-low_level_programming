#include "lists.h"
/**
 * print_listint - Print all elements of a listint_t
 * @h: Head pointer
 *
 * Return: Number of elements
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	if (h != NULL)
	{
		count = 0;
		while (h != NULL)
		{
			printf("%d\n", h->n);
			count++;
			h = h->next;
		}
	}
	return (count);
}
