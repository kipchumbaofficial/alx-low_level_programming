#include "lists.h"
#include <string.h>
/**
 * main - Checks cde
 *
 * Return: 0
 */
int main(void)
{
	dlistint_t *head;

	head = NULL;
	add_dnodeint(&head, 0);
	print_dlistint(head);
	add_dnodeint(&head, 1);
	add_dnodeint(&head, 2);
	add_dnodeint(&head, 3);
	add_dnodeint(&head, 4);
	add_dnodeint(&head, 98);
	add_dnodeint(&head, 402);
	add_dnodeint(&head, 1024);
	print_dlistint(head);
	return (EXIT_SUCCESS);
}
