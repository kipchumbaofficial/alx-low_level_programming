#include "lists.h"
/**
 * dlistint_len - Returns number of elements
 * @h: Head pinter to DDL
 *
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			i++;
			h = h->next;
		}
	}
	return (i);
}
