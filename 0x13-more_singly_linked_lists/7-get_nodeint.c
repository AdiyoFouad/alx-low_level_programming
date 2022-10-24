#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the first node in the list
 * @index: index of the node to return
 *
 * Return: pointer to the indexed node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;

	if (head == NULL)
		return (NULL);
	while (index >= 0 && head->next)
	{
		head = head->next;
		index--;
	}
	return (head);
}
