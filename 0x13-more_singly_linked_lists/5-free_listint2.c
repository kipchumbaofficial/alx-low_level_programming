#include "lists.h"
/**
 * free_listint2 - Frees a list
 * @head: Reference
 */
void free_listint2(listint_t **head)
{
	listint_t *new, *now;

	if (head == NULL)
	{
		return;
	}
	if (*head != NULL)
	{
		now = *head;
		while (now != NULL)
		{
			new = now->next;
			free(now);

			now = new;
		}
		*head = NULL;
	}
}
