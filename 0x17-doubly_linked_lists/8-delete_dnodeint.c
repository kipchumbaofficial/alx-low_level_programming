#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes at index
 * @head: Pointer to pointer
 * @index: index to be deleted
 *
 * Return: 1 on success an -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = *head;

	if (head != NULL && *head != NULL)
	{
		if (index == 0)
		{
			*head = (*head)->next;
			if (*head)
				(*head)->prev = NULL;
			free(temp);
			return (1);
		}
		while (temp != NULL)
		{
			if (i == index)
			{
				temp->prev->next = temp->next;
				temp->next->prev = temp->prev;
				free(temp);
				return (1);
			}
		i++;
		temp = temp->next;
		}
	}
	return (-1);
}
