#include "lists.h"
/**
 * free_listint - Frees a listint_t list
 * @head: Pointer to head node
 */
void free_listint(listint_t *head)
{
	listint_t *current, *new;

	current = head;

	while (current != NULL)
	{
		new = current->next;
		free(current);
		current = new;
	}
}
