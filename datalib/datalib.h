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
# include "/home/srgalan/Repositorios/Charla-Git/git-ft/minilib/libft.h"

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
t_dlist	*dl_new(void *data);
void	dl_add_first(t_dlist **list, t_list *elem);
void	dl_add_after(t_dlist **list, t_dlist *node, t_list *elem);
void	dl_add_last(t_dlist **list, t_list *elem);
t_dlist	dl_replace(t_dlist *elem, void *new_data);

// Deletes one or more elements from the list.
void	dl_remove_first(t_dlist **list);
void	dl_remove(t_dlist **list, t_dlist *elem);
void	dl_remove_last(t_dlist **list);
void	dl_purge(t_dlist **list, void *data);
void	dl_clear(t_dlist **list);

// Check some data from the list.
int		dl_empty(t_dlist *list);
int		dl_size(t_dlist *list);
t_dlist	dl_first(t_dlist *list);
t_dlist	dl_last(t_dlist *list);
t_dlist	dl_search(t_dlist *list, void *data);

// Print the list.
void	dl_print(void);

/**	QUEUE	**/

// Struct for the elements of the queue.
typedef struct s_queue
{
	void	*data;
	struct s_queue	*next;
}	t_queue;

// Creates an element for the queue.
t_queue	*qu_new(void);
void	qu_enqueue(int data);

// Deletes an element from the queue.
int		qu_dequeue(void);
void	qu_clear(void);

// Check some data from the queue.
int		qu_empty(void);
int		qu_size(void);
int		qu_front(void);
int		qu_back(void);

// Print the queue.
void	qu_print(void);

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
