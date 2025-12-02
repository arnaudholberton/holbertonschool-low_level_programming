#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newFin, *tmp;
int i = 0;
newFin = malloc(sizeof(list_t));
if (newFin == NULL)
	return (NULL);
newFin->str = strdup(str);
if (newFin->str == NULL)
{
	free(newFin);
	return (NULL);
}
while (str[i])
	i++;
newFin->len = i;
newFin->next = NULL;
if (*head == NULL)
{
	*head = newFin;
	return (newFin);
}
tmp = *head;
while (tmp->next != NULL)
	tmp = tmp->next;
tmp->next = newFin;
return (newFin);
}
