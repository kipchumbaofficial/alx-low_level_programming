#include "lists.h"
/**
 * add_nodeint - Adds node at the beggining
 * @head: Reference
 * @n: integer
 *
 * Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	temp = *head;

	return (temp);
}
