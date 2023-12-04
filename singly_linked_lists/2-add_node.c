#include "lists.h"

/**
 * add_node - function to add node at the beginig of a list
 * @head: pointer to the head position
 * @str: string
 * Return: address of a new vallue
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	if (str == NULL)
		return (NULL);
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->len = strlen(str);
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}

