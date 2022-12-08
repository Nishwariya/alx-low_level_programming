#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: header pointer
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		cont++;
	}
	return (cont);
}
