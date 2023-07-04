#include "lists.h"
/**
 * add_nodeint_end - Adds node at the end
 * @head: Reference
 * @n: integer
 *
 * Return: Pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	temp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		temp = new;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
		temp = new;
	}
	temp = *head;
	return (temp);
}
