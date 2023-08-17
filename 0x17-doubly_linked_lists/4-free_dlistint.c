#include "lists.h"
/**
 * free_dlistint - Frees a dll
 * @head: Head pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
