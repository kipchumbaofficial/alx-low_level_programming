#include "lists.h"
/**
 * sum_listint - Sum data
 * @head: Head node pointer
 *
 * Return: Sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *start;

	start = head;
	if (head != NULL)
	{
		while (start != NULL)
		{
			sum += start->n;
			start = start->next;
		}
	}
	return (sum);
}
