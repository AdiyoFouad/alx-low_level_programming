#include "main.h"

/**
 * print_number - print integers
 * @n: integer to print
 * Return: void
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
		num = n;
	if (num / 10)
		print_number(num / 10);
	_putchar(num % 10 + '0');
}

/**
 * print_listin - prints all the element of a listint_t list
 * @h: list head
 * Return: the number of nodes
 */
 size_t print_listin(const listint_t *h)
 {
    size_t n = 0;

    while (h != NULL)
    {
        print_number(h->n);
        h = h->next;
        n++
    }
    return (n);
 }