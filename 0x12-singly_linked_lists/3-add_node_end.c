#include "lists.h"

/**
 * slen - Calculates the length of a string.
 * @str: string
 * Return: The length of the string
*/
int slen(const char *str)
{
	int i;

	if (str == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 *add_node_end - adds a new node at the end of a list_t.
 *@head: pointer to head element.
 *@str: string to be duplicated
 *
 *Return: address of the new element.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *lastNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = slen(str);
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		lastNode = *head;

		while (lastNode->next != NULL)
			lastNode = lastNode->next;
		lastNode->next = newNode;
	}

	return (newNode);
}
