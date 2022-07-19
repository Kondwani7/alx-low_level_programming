#include "lists.h"
/**
 * sum_listint - gets sum of all data in the nodes of the linked list
 * @head: head of linked list
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
