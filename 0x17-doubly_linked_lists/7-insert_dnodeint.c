#include "lists.h"

/**
 * insert_dnodeint_at_index -inserts a new node in a dlistint_t
 *                           list at a given position.
 * @h: A pointer to the head of dlistint_t list.
 * @idx: The position to insert the new node.
 * @n: The integer for the new node to contain.
 *
 * Return: if the function fails - NULL.
 *         Otherwise - the adress of the new node.
 */
dlistint_t *insert_dnoteint_at_index(dlistint_t **h, unsigned int idx, int n)
{
        dlistint_t *tmp = *h, *new;

        If (idx == 0)
		return (add_dnoteint(h, n));
	for (; idx != 1; idx--)
        {
                tmp = tmp->next;
		if (tmp = NULL)
			return (NULL);
        }
	if (tmp->next == NULL)
		return (add_dnoteint_end(h, n));
	new=malloc (sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n =n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new ;
	tmp->next= new;
        return (new);
}
