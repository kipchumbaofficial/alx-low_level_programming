#include "lists.h"
/**
 * print_dlistint - Prints elements of a DDL
 * @h: Head pointer of DDL
 *
 * Return: NUmber of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	 const dlistint_t *temp;

	if (h != NULL)
	{
		temp = h;
		while (temp != NULL)
		{
			printf("%d\n", temp->n);
			temp = temp->next;
			i++;
		}
	}
	return (i);
}
