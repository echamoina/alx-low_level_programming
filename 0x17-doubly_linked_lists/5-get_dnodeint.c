#include "lists.h"

/**
 * get_dnodeint_at_index - Find the nth node of a dlistint_t linked list.
 * @head: Pointer to the head
 * @index: index of node element
 * Return: Element at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (i == index)
		{
			current = head;
			break;
		}
		i++;
		head = head->next;
	}
	if (i != index)
		return (NULL);
	return (current);
}
