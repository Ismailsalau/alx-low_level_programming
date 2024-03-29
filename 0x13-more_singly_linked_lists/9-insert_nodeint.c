#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a  new node at a given position.
 * @head: The first element of the list.
 * @idx: The position of insertion.
 * @n: The data of the new node.
 * Return: The address of the new node if success.
 *	   NULL otherwise.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *current, *new;

		if (head == NULL)
			return (NULL);
		if (idx != 0)
		{
			current = *head;
			for (i = 0; i < idx - 1 && current != NULL; i++)
			{
				current = current->next;
			}
			if (current == NULL)
				return (NULL);
		}
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		if (idx == 0)
		{
			new->next = *head;
			*head = new;
			return (new);
		}
		new->next = current->next;
		current->next = new;
		return (new);
}
