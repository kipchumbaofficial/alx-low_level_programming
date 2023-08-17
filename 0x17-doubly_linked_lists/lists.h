#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct dlistint_s - double linked list
 * @n: Integers
 * @prev: Points to previous node
 * @next: Points to next node
 *
 * Description: Doubly linked list node structure
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif
