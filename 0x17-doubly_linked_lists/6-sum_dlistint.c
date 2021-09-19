#include "lists.h"
/**
  * sum_dlistint - entry point
  *
  * @head: list
  *
  * Return: list
  */
int sum_dlistint(dlistint_t *head)
{
	int i = 0, sum = 0;

	for (; head != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
