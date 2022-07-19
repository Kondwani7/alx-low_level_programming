#include "lists.h"
/**
 * get_nodeint_at_index - returns the node in linked list at our target index
 * @head: head of linked list
 * @index: target index we want to return
 *
 * Return: pointer to data we want, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
