#include "binary_trees.h"
/**
 * binary_trees_ancestor - unction that finds the
 * lowest common ancestor of two nodes.
 * @first: pointer to the first node.
 * @second: pointer to the second node.
 * Return:  pointer to the lowest common ancestor node
 * Or NULL if no common ancestor was found.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *fir
		st, const binary_tree_t *second)
{
	const binary_tree_t *tempFirst = first;

	while (tempFirst != NULL)
	{
		const binary_tree_t *tempSecond = second;

		while (tempSecond != NULL)
		{
			if (tempSecond == tempFirst)
				return ((binary_tree_t *)tempSecond);
			tempSecond = tempSecond->parent;
		}
		tempFirst = tempFirst->parent;
	}
	return (NULL);
}
