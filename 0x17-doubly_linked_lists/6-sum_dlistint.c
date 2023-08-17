#include "lists.h"
/**
 * sum_dlistint - Sums data in dll
 * @head: Header pointer
 *
 * Return: Sum
 *
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
