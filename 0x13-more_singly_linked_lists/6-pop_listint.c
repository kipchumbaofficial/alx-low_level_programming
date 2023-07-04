#include "lists.h"
/**
 * pop_listint - Deletes head node of listint_t list
 * @head: Reference
 *
 * Return: 0 or data of head node
 */
int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *start, *nxt;

	if (*head != NULL && head != NULL)
	{
		start = *head;
		i = start->n;
		nxt = start->next;
		*head = nxt;
		free(start);
	}
	return (i);
}
