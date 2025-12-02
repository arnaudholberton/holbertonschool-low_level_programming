#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_list - Frees a singly linked list.
 * @head: Pointer to the head of the list.
 */
void free_list(list_t *head)
{
list_t *tmp;
while (head != NULL)
{
	tmp = head;
	head = head->next;
	free(tmp->str);
	free(tmp);
}
}
