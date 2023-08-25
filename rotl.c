#include "monty.h"
/**
  *rotl- rotates the stack to the top
  *@head: stack head node
  *@number: line_number
  *Return: nothing
 */
void rotl(stack_t **head,  __attribute__((unused)) unsigned int number)
{
	stack_t *tmp = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	aux = (*head)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = aux;
}
