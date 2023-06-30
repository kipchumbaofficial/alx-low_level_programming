#include "lists.h"
/**
 * list_len - Returns no of elements
 * @h: Pointer to node
 *
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
