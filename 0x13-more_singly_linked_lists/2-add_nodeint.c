#include "lists.h"
/**
 * add_nodeint - adds a new node at start of linked list
 * @head: head of linked list
 * @n: data or val
 *
 * Return: ponter to our new inserted node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
