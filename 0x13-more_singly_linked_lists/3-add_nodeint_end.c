#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a  new node at the end of a listint_t list.
 * @head: A pointer to the head of the list.
 * @n: The integer to add as value of the new node.
 * Return: A pointer to the new added node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
	return (new);
}	
