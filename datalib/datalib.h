/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   datalib.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:40:27 by antgalan          #+#    #+#             */
/*   Updated: 2023/01/02 01:36:34 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATALIB_H
# define DATALIB_H

# include <unistd.h>
# include <stdlib.h>
# include "/home/srgalan/Sync/git-ft/minilib/libft.h"

/**	LINKED LIST	**/


// Struct for the elements of the list.


// Creates one or more elements for the list.
t_list	*ll_new(void *data);
void	ll_add_first(t_list **list, t_list *elem);
void	ll_add_after(t_list *elem, t_list *new);
void	ll_add_last(t_list **list, t_list *elem);
int		ll_replace(t_list *elem, void *new_data);

// Deletes one or more elements from the list.
void	ll_remove_first(t_list **list);
void	ll_remove(t_list **list, t_list *elem);
void	ll_remove_last(t_list **list);
int		ll_purge(t_list **list, void *data);
void	ll_clear(t_list **list);

// Check some data from the list.
int		ll_empty(t_list *list);
int		ll_size(t_list *list);
t_list	*ll_first(t_list *list);
t_list	*ll_last(t_list *list);
t_list	*ll_search(t_list *list, void *data);

// Print the list.
void	ll_print(t_list *list);

/**	DOUBLY LINKED LIST	**/

// Struct for the elements of the list.
typedef struct s_dlist
{
	void			*data;
	struct s_dlist	*prev;
	struct s_dlist	*next;
}	t_dlist;

// Creates one or more elements for the list.
t_dlist	*dll_new(void *data);
void	dll_add_first(t_dlist **list, t_dlist *elem);
void	dll_add_after(t_dlist *elem, t_dlist *new);
void	dll_add_last(t_dlist **list, t_dlist *elem);
t_dlist	*dll_replace(t_dlist *elem, void *new_data);

// Deletes one or more elements from the list.
void	dll_remove_first(t_dlist **list);
void	dll_remove(t_dlist **list, t_dlist *elem);
void	dll_remove_last(t_dlist **list);
void	dll_purge(t_dlist **list, void *data);
void	dll_clear(t_dlist **list);

// Check some data from the list.
int		dll_empty(t_dlist *list);
int		dll_size(t_dlist *list);
t_dlist	*dll_first(t_dlist *list);
t_dlist	*dll_last(t_dlist *list);
t_dlist	*dll_search(t_dlist *list, void *data);

// Print the list.
void	dll_print(t_dlist *list);

/**	QUEUE	**/

// Struct for the elements of the queue.
typedef struct s_queue
{
	void	*data;
	struct s_queue	*next;
}	t_queue;

// Creates an element for the queue.
t_queue	*qu_new(void* data);
void	qu_enqueue(t_queue **queue, void *data);

// Deletes an element from the queue.
void	qu_dequeue(t_queue **queue);
void	qu_clear(t_queue **queue);

// Check some data from the queue.
int		qu_empty(t_queue *queue);
int		qu_size(t_queue *queue);
t_queue	*qu_first(t_queue *queue);
t_queue *qu_last(t_queue *queue);

// Print the queue.
void	qu_print(t_queue *queue);

/**	STACK	**/

// Struct for the elements of the stack.
typedef struct s_stack
{
	void			*data;
	struct s_stack	*next;
}	t_stack;

// Modifies the stack.
t_stack sk_new(void *data);
void	sk_push(t_stack *stack, void *data);
t_stack *sk_pop(t_stack *stack);
void	sk_clear(t_stack *stack);

// Check some data from the stack.
int		sk_empty(t_stack *stack);
int		sk_size(t_stack *stack);
void	*sk_top(t_stack *stack);
void	*sk_peek(t_stack *stack);

/** BINARY TREE **/

// Struct for the elements of the tree.
typedef struct s_tree
{
	void			*data;
	struct s_tree	*left;
	struct s_tree	*right;
}	t_tree;

// Creates one o more elements for the tree.
t_tree	*bt_new(void *data);
void	bt_add(t_tree *tree, void *data);
void	bt_add_left(t_tree *tree, void *data);
void	bt_add_right(t_tree *tree, void *data);

// Deletes one or more elements from the tree.
void	bt_remove(t_tree *tree, void *data);
void	bt_clear(t_tree *tree);

// Check some data from the tree.
int		bt_empty(t_tree *tree);
int		bt_leaf(t_tree *tree);
int		bt_height(t_tree *tree);
int		bt_depth(t_tree *tree);
int		bt_search(t_tree *tree, void *data);

// Print the tree.
void	bt_print(t_tree *tree);

/** SET **/

// Struct for the elements of the set.
typedef struct s_set
{
	void	*elements;
	int		size;
}	t_set;

// Basic operations.
void	st_new(void);
void	st_add(void *data);
void	st_remove(void *data);

// Modifiers operations.
int		st_empty(void);
void	st_union(t_set *set1, t_set *set2);
void	st_intersection(t_set *set1, t_set *set2);
void	st_difference(t_set *set1, t_set *set2);

#endif
