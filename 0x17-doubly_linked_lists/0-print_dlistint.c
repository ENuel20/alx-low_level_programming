#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print all elements of a dlistint_t list
 * @h: head of list to print
 * Return: number of nodes printed
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t ret = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		ret++;
	}
	return (ret);
}
