#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at index index of a listint_t linked list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_noteint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curent, *cnext;

	if (head == NULL)
	{
		return (NULL);
	}
	curent = *head;
	if (index == 0)
	{
		cnext = curent->next;
		free(curent);
		*head = cnext;
		return (1);
	}
	while (curent != NULL)
	{
		if (index == 1)
		{
			cnext = curent->next;
			curent->next = cnext->next;
			free(cnext);
			return (1);
		}
		curent = curent->next;
		index--;
	}
	return (-1);
}
