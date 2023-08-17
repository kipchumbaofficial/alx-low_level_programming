#include "lists.h"
/**
 * add_dnodeint_end - ADDs node at the end
 * @head: Pointer to pointer
 * @n: Data
 *
 * Return: Address of ne element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp = *head;

	if (head != NULL)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		if (temp == NULL)
		{
			temp = new;
		}
		else
		{
			while (temp != NULL)
			{
				temp = temp->next;
			}
			temp->next = new;
			new->prev = temp;
			temp = new;
		}
	}
	return (temp);
}
