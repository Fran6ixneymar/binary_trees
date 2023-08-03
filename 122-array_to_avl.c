#include "binary_trees.h"

/**
 * array_to_avl - This builds an AVL tree from an array.
 * @array: This pointer points to the first element of the array to be converted.
 * @size: The number of elements in @array.
 *
 * Return: The pointer to the root node of the created AVL, or NULL upon failure.
 */
avl_t *array_to_avl(int *array, size_t size)
{
	avl_t *tree = NULL;
	size_t fig, num;

	if (array == NULL)
		return (NULL);

	for (fig = 0; fig < size; fig++)
	{
		for (num = 0; num < fig; num++)
		{
			if (array[num] == array[fig])
				break;
		}
		if (num == fig)
		{
			if (avl_insert(&tree, array[fig]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}
