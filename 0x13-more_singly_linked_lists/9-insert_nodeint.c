#include  "lists.h"
/**
 * insert_nodeint_at_index - Insert newnode at index
 * @head: Reference
 * @idx: Given index
 * @n: Data  to insert
 *
 * Return: Pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *start = *head, *new;
	unsigned int count = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (head != NULL && *head != NULL)
	{
		while (start != NULL)
		{
			if (count == (idx - 1))
			{
				new->next = start->next;
				start->next = new;
				return (new);
			}
			count++;
			start = start->next;
		}
		if ((idx - 1) > count)
		{
			return (NULL);
		}
	}
	return (new);
}
