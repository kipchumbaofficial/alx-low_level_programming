#include "lists.h"
/**
 * insert_dnodeint_at_index - Insert at given node
 * @h: Pointer to pointer
 * @idx: index to insert to
 * @n: data
 *
 * Return: Address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int i = 0;

	if (h != NULL)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->prev = NULL;
		new->n = n;
		new->next = NULL;
		if (idx == 0)
		{
			new->next = *h;
			if (*h != NULL)
				(*h)->prev = new;
			*h = new;
			return (new);
		}
		while (temp != NULL)
		{
			if (i == idx)
			{
				new->next = temp;
				new->prev = temp->prev;
				if (temp->prev != NULL)
					temp->prev->next = new;
				temp->prev = new;
				return (new);
			}
			i++;
			temp = temp->next;
		}
	}
	return (NULL);
}
