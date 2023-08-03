#include "binary_trees.h"

/**
 * array_to_heap - This builds a Max Binary Heap tree
 *
 * @array: This points to the first element of the array
 * @size: The number of element in the array
 * Return: The pointer to the root node of the AVL tree
 */
heap_t *array_to_heap(int *array, size_t size)
{
	heap_t *tree;
	size_t fig;

	tree = NULL;

	for (fig = 0; fig < size; fig++)
	{
		heap_insert(&tree, array[fig]);
	}

	return (tree);
}
