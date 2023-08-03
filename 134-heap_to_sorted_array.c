#include "binary_trees.h"

/**
 * count_h_nodes - This counts the number of nodes inside a tree
 * @root: Pointer to the tree's root node
 *
 * Return: The number of tree nodes
 */
int count_h_nodes(binary_tree_t *root)
{
	if (!root)
		return (0);

	return (1 + count_h_nodes(root->left) +
		    count_h_nodes(root->right));
}

/**
 * heap_to_sorted_array - This creates a sorted array from a max heap
 * @heap: Pointer to the heap's node
 * @size: Pointer to the arrays size
 *
 * Return: The pointer to array of integers
 */
int *heap_to_sorted_array(heap_t *heap, size_t *size)
{
	int fig, nodes, *arr = NULL;

	*size = 0;
	if (!heap)
		return (NULL);

	nodes = count_h_nodes(heap);
	arr = malloc(sizeof(*arr) * nodes);
	if (!arr)
		return (NULL);

	*size = nodes;
	for (fig = 0; fig < nodes; fig++)
		arr[fig] = heap_extract(&heap);

	return (arr);
}
