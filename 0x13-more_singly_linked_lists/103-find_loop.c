#include "lists.h"

/**
 * find_lisint_loop - floyd's cycle tortise and hare
 * @head: head of linked lsit
 *
 * Return: node where loop occcurs if found
 */

listint_t *find_listint_loop(lisint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);

	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	return (NULL);
}
