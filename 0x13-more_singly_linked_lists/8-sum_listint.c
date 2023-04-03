#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of listint_t linked list.
 * @head: Pointer to the head node of the list.
 *
 * Return: The sum of all the data (n) of the list, or 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
