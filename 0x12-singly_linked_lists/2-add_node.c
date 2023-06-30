#include "lists.h"
#include <string.h>
/**
 * _strlen - Gets length of the string
 * @str: String
 *
 * Return: Length of the string
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
 * add_node - Adds a node at the beginning of list_t
 * @head: Pointer to head of the list
 * @str: String
 *
 * Return: Pointer to address of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	newnode->len = _strlen(str);
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
