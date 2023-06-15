#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Address of head
 * @idx: index to insert element at
 * @n: Value to insert
 * Return: pointer to the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new_node;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	tmp = *h;

	if (tmp == NULL)
		return (NULL);

	while (tmp != NULL)
	{
		if (i == idx)
		{
			new_node->prev = tmp->prev;
			new_node->next = tmp->next;
			tmp->prev = new_node;
			tmp->next = new_node;
			return (new_node);
		}
		i++;
		tmp = tmp->next;
	}
	if (i == idx)
		return (add_dnodeint_end(h, n));
	if (i != idx)
	{
		free(new_node);
		return (NULL);
	}
	return (new_node);
}
