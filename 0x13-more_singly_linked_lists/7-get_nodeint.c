#include "lists.h"
/**
 * get_nodeint_at_index - Returns nth node
 * @head: Heade node pointer
 * @index: Index of the node
 *
 * Return: nth node or NULL otherwise
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	if (head != NULL)
	{
		while (current != NULL)
		{
			if (count == index)
			{
				return (current);
			}
			count++;
			current = current->next;
		}
	}
	return (NULL);
}
