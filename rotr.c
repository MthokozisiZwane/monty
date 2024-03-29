#include "monty.h"
/**
  *rotr- rotates the stack to the bottom
  *@head: stack head node
  *@number: line_number
  *Return: nothing
 */
void rotr(stack_t **head, __attribute__((unused)) unsigned int number)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
