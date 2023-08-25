#include "monty.h"
/**
 * pall - prints data in the stack
 * @head: stack head
 * @number: process line
 * Return: nothing
*/
void pall(stack_t **head, unsigned int number)
{
	stack_t *h;
	(void)number;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
