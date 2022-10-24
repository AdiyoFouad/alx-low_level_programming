#include "main.h"
#include <stdio.h>

/**
 * print_listin - prints all the element of a listint_t list
 * @h: list head
 * Return: the number of nodes
 */
 size_t print_listint(const listint_t *h)
 {
    size_t n = 0;

    while (h != NULL)
    {
        printf("%d\n",h->n);
        h = h->next;
        n++
    }
    return (n);
 }
