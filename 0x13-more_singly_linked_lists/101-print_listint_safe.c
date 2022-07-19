#include  "lists.h"
/**
 * print_listint_safe - prints a linked list safely
 * @head: head of linked list
 *
 * Return: number of nodes in our linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	lisint *temp;
	size_t i = 0;

	temp = *head;
	if (head == NULL)
		return (i);
	while (temp)
	{
		if (temp <= temp->next)
		{
			free(temp);
			i++;
			break;
		}

		*head = temp->next;
		free(temp);
		temp = *head;
		i++;
	}
	*head = NULL;
	return (i);
}
