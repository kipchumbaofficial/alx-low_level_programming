#include "lists.h"
/**
 * free_list - Frees a list
 * @head: Pointer to first node
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *new, *now;

	now = head;

	while (now != NULL)
	{
		new = now->next;
		free(now->str);
		free(now);
		now = new;
	}
}
