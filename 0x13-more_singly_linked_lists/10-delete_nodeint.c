#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at index index of a listint_t linked list
 * @head: pointer to the address of the head of the list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_noteint_at_index(listint_t **head, unsigned int index)
{
	int i;
	listint_t *current, *cnext;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	current = *head;
	if (index == 0)
	{
		cnext = current->next;
		free(current);
		*head = cnext;
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	cnext = curent->next;
	curent->next = cnext->next;
	free(cnext);
	return (1);

}
