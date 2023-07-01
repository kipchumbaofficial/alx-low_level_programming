#include "lists.h"
#include <string.h>
/**
 * _strlen - Gets the length of the string
 * @str: String to get length
 *
 * Return: Length
 */
unsigned int _strlen(const char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	return (1 + _strlen(str + 1));
}
/**
 * add_node_end - Adds a node at the end of list
 * @str: String to add to new list
 * @head: Pointer to the first node
 *
 * Return: Pointer to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *newnode;

	temp = *head;
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	newnode->len = _strlen(str);
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		temp = newnode;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
		temp = newnode;
	}
	temp = *head;
	return (temp);
}
