#include "lists.h"
/**
 * add_dnodeint - Adds node at the begginning
 * @head: Pointer to apointer to head node
 * @n: Data
 *
 * Return: Address of new node or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp = *head;

	if (head != NULL)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->prev = NULL;
		if (temp == NULL)
		{
			new_node->next = NULL;
			new_node->n = n;
			temp = new_node;
		}
		else
		{
			new_node->n = n;
			new_node->next = temp;
			temp->prev = new_node;
			temp = new_node;
		}
	}
	return (temp);
}
