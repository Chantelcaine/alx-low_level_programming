#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check_looped_listint - ....
 * @head: ....
 * Return: ....
 */
size_t check_looped_listint(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
			break;

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	if (tortoise == hare)
	{
		tortoise = head;
		while (tortoise != hare)
		{
			nodes++;
			tortoise = tortoise->next;
			hare = hare->next;
		}

		tortoise = tortoise->next;
		while (tortoise != hare)
		{
			nodes++;
			tortoise = tortoise->next;
		}
		return (nodes);
	}
	return (0);
}

/**
 * print_listint_safe - .....
 * @head: ....
 * Return: ...
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = check_looped_listint(head);

	if (nodes == 0)
	{
		while (head != NULL)
		{
			nodes++;
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
