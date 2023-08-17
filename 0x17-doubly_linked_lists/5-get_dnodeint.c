#include "lists.h"
/**
 * get_dnodeint_at_index - Returns nth node
 * @head: Head pointer
 * @index: Index of node
 *
 * Return: Node or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;

	while (temp != NULL)
	{
		if (i == index)
			return (temp);
		i++;
		temp = temp->next;
	}
	if (index > i)
		temp = NULL;
	return (temp);
}
