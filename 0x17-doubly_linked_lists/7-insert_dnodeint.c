#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at position
 * @h: dlistint_t
 * @idx: unsigned int
 * @n: int
 * Return: new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int x = 0;
	dlistint_t *temp = *h;
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);

	if (!h)
		return (NULL);

	node->n = n;

	if (idx == 0)
	{
		node->prev = NULL;
		node->next = *h;
		(*h)->prev = node;
		*h = node;
		return (node);
	}

	while (temp)
	{
		if (idx == x + 1)
		{
			if (temp->next == NULL)
			{
				node->next = NULL;
				node->prev = temp;
				temp->next = node;

			}
			else
			{
				node->next = temp->next;
				node->prev = temp;
				temp->next = node;
				node->next->prev = node;
			}
			return (node);
		}

		x++;
		temp = temp->next;

	}

	free (node);
	return (NULL);




}
